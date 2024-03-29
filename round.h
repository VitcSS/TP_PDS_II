#ifndef ROUND_H_INCLUDED
#define ROUND_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include <cctype>
#include"player.h"
#include"card.h"
#include"humano.h"
#include"bot.h"
#include"menu.h"


using namespace std;

class Round{
    private:
        vector<card> mesa;
        int primeiro;
        int ganhador;
        int ganhou_primeira;
        int truco;
        vector<player*>* jogadores;
        void jogar_queda();
        void pedir_truco(int);
        int ultimo_truco;
    public:
        Round(int i, vector<player*>*);
        void jogar();
        vector<card> get_mesa();
        void limpar();
};

Round::Round(int primeiro, vector<player*>* jgs){
    this->primeiro = primeiro;
    this->jogadores = jgs;
}

void Round::limpar() {
    mesa.clear();
}

vector<card> Round::get_mesa() {
    return mesa;
}

void Round::jogar_queda() {
    for (int i = 0; i < 4; i++) {
        int indice = i+primeiro;
        if (indice > 3) {
            indice = indice-4;
        }
        player* atual = (*jogadores)[indice];
        menu::clear();
        cout << atual->get_name() << ", pressione ENTER para começar sua vez.";
        getchar();
        bool loop = true;
        while (loop && atual->is_a_bot() == false) {
            menu::display(*jogadores, indice);
            int carta;
            cout << "Qual carta você gostaria de jogar? Use 0 para pedir truco: ";
            cin.clear();
            fflush(stdin);
            cin >> carta;
            if (carta == 0) {
                this->pedir_truco(indice);
            } else {
                try {
                    mesa.push_back(atual->play_card(carta));
                    loop = false;
                } catch (invalid_argument er) {
                    cout << er.what() << endl;
                }
            }
        }
        if (atual->is_a_bot()) {
            if(atual->ask_truco()){
                this->pedir_truco(indice);
            }
            mesa.push_back(atual->play_card(0));
        }
    }
    bool empate = true;
    for (int i = 0; i<4; i++) {
        bool ganhando = true;
        int indice = i+primeiro;
        if (indice > 3) {
            indice = indice-4;
        }
        for (int j = 0; j < 4; j++) {
            if (j == i) {
                continue;
            }
            if (mesa[j] > mesa[i] || mesa[j] == mesa[i]) {
                ganhando = false;
                break;
            }
        }
        if (ganhando) {
            empate = false;
            (*jogadores)[indice%2 + 2]->ganha_queda();
            (*jogadores)[indice%2]->ganha_queda();
            break;
        }
    }

}

void Round::pedir_truco(int i) {
    if (ultimo_truco == i%2 || truco == 12) {
        return;
    }
    char ans;
    if ((*jogadores)[i]->is_a_bot()) {
        if ((*jogadores)[i]->accept_refuse_truco()) {
            ans = 's';
        }
    } else {
        cout << (*jogadores)[i]->get_name() << " pediu truco. " << (*jogadores)[(i+1)%4]->get_name() << " aceita (s/n)?";
        fflush(stdin);
        cin.clear();
        cin >> ans;
        ans = tolower(ans);
    }
    if (ans == 's') {
        switch (truco) {
            case 1:
                truco = 4;
                break;
            case 4:
                truco = 8;
            case 8:
                truco = 12;
        }
        ultimo_truco = i % 2;
    }
}

void Round::jogar() {
    int count = 0;
    while ((*jogadores)[0]->get_quedas() < 2 && (*jogadores)[1]->get_quedas() < 2) {
        this->jogar_queda();
        count++;
        if (count == 1 && (*jogadores)[0]->get_quedas() == 1 && (*jogadores)[1]->get_quedas() == 1) {
            count--;
        } else if (count == 1 && (*jogadores)[0]->get_quedas() == 1) {
            ganhou_primeira = 0;
        } else if (count == 1 && (*jogadores)[1]->get_quedas() == 1) {
            ganhou_primeira = 1;
        }
    }
    if ((*jogadores)[1]->get_quedas() != 2) {
        (*jogadores)[0]->add_pontos(truco);
        (*jogadores)[2]->add_pontos(truco);
        menu::clear();
        cout << (*jogadores)[0]->get_name() << " e " << (*jogadores)[2]->get_name() << " venceram." << endl;
    } else if ((*jogadores)[0]->get_quedas() != 2) {
        (*jogadores)[1]->add_pontos(truco);
        (*jogadores)[3]->add_pontos(truco);
        menu::clear();
        cout << (*jogadores)[1]->get_name() << " e " << (*jogadores)[3]->get_name() << " venceram." << endl;
    } else {
        if (ganhou_primeira == 0 || ganhou_primeira == 2) {
            (*jogadores)[0]->add_pontos(truco);
            (*jogadores)[2]->add_pontos(truco);
            menu::clear();
            cout << (*jogadores)[0]->get_name() << " e " << (*jogadores)[2]->get_name() << " venceram." << endl;
        } else {
            (*jogadores)[1]->add_pontos(truco);
            (*jogadores)[3]->add_pontos(truco);
            menu::clear();
            cout << (*jogadores)[1]->get_name() << " e " << (*jogadores)[3]->get_name() << " venceram." << endl;
        }
    }
    getchar();
}

#endif
