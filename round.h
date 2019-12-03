#ifndef ROUND_H_INCLUDED
#define ROUND_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
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

void Round::jogar() {
    while ((*jogadores)[0]->get_quedas() < 2 && (*jogadores)[1]->get_quedas() < 2) {
        this->jogar_queda();
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

void Round::jogar_queda() {
    return;
}

#endif
