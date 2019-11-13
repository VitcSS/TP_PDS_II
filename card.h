#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"bot.h"
#include"player.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

using namespace std;

class card{
    private:
        string suit; //naipe
        int valor;
        string nome;
    public:
        card(int v,int n);
//        ~card(); dando erro, não implementado
        string get_suit();
        int get_valor();
        string get_nome();
        void imprimir();
        bool operator>(const card c) const;
        bool operator==(const card c) const;
        friend void menu::perguntar_jogadores();

};

card::card (int v, int s){ 
	switch (s) {
		case 0:
			suit = "Paus";
			break;
		case 1:
			suit = "Espadas";
			break;
		case 2:
			suit = "Ouros";
			break;
		case 3:
			suit = "Copas";
			break;
	}
	valor = v;
	switch (valor) {
		case 0:
			nome = "Quatro";
			break;
		case 1:
			nome = "Cinco";
			break;
		case 2:
			nome = "Seis";
			break;
		case 3:
			nome = "Sete";
			break;
		case 4:
			nome = "Dama";
			break;
		case 5:
			nome = "Valete";
			break;
		case 6:
			nome = "Rei";
			break;
		case 7:
			nome = "As";
			break;
		case 8:
			nome = "Dois";
			break;
		case 9:
			nome = "Tres";
			break;
	}
}

void card::imprimir() {
	cout << nome << " de " << suit;
}

int card::get_valor() {
	return valor;
}

string card::get_suit() {
	return suit;
}

string card::get_nome() {
	return nome;
}

bool card::operator>(const card& c) const {
	if (valor == 0 && naipe == 0) {
		return true;
	} else if (valor == 3 && naipe == 3 && !(c.valor == 0 && c.naipe == 0)) {
		return true;
	} else if (valor == 7 && naipe == 1 && !((c.valor == 0 && c.naipe == 0) || (c.valor == 3 && c.naipe == 3))) {
		return true;
	} else if (valor == 3 && naipe == 2 && !((c.valor == 0 && c.naipe == 0) || (c.valor == 3 && c.naipe == 3) || (c.valor == 7 && c.naipe == 1))) {
		return true;
	} else if (!((c.valor == 0 && c.naipe == 0) || (c.valor == 3 && c.naipe == 3) || (c.valor == 7 && c.naipe == 1) || (c.valor == 3 && c.valor == 2))) {
		return valor > c.valor;
	} else {
		return 0;
	}
}

bool card::operator==(const card& c) const {
	if (c > this || this > c) {
		return false;
	} else {
		return true;
	}
}

/* Implementação do gerador do deck, mover depois

int main(){

srand(time(NULL));
vector<card> deck;
int i = 0;
while (i < 10) {
	int j = 0;
	while (j < 4) {
		deck.push_back(card(i, j));
		j++;
	}
	i++;
}

vector<card>::iterator iter = deck.begin();
for (; iter != deck.end(); iter++) {
	iter->imprimir();
	cout << endl;
}
*/


#endif