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
        void imprimir(); //excluir depois
        bool compare_valor(card );

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
			nome = "As";
			break;
		case 1:
			nome = "Dois";
			break;
		case 2:
			nome = "Tres";
			break;
		case 3:
			nome = "Quatro";
			break;
		case 4:
			nome = "Cinco";
			break;
		case 5:
			nome = "Seis";
			break;
		case 6:
			nome = "Sete";
			break;
		case 7:
			nome = "Dama";
			break;
		case 8:
			nome = "Valete";
			break;
		case 9:
			nome = "Rei";
			break;
	}
}
void card::imprimir() {
	cout << nome << " de " << suit;
}

/*int main(){

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
}*/

