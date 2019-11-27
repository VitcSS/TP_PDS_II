#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>

using namespace std;

class card{
    private:
        string suit; //suit
        int valor;
        string nome;
    public:
        card(int v,int s); // v é o valor da carta, ou seja, A, rei, 4, etc.  S é o naipe da carta, por exemplo, ouros ou espadas
//        ~card(); dando erro, não implementado
        string get_suit();
        int get_valor();
        string get_nome();
        void imprimir();
        bool operator>(const card& c) const;
        bool operator==(const card& c) const;
       // friend void menu::perguntar_jogadores();

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


bool card::operator==(const card& c) const {
	if (c > *this || *this > c) {
		return false;
	} else {
		return true;
	}
}

bool card::operator>(const card& c) const {
	if (valor == 0 && suit == "Paus") {
		return true;
	} else if (valor == 3 && suit == "Copas" && !(c.valor == 0 && c.suit == "Paus")) {
		return true;
	} else if (valor == 7 && suit == "Espadas" && !((c.valor == 0 && c.suit == "Paus") || (c.valor == 3 && c.suit == "Copas"))) {
		return true;
	} else if (valor == 3 && suit == "Ouros" && !((c.valor == 0 && c.suit == "Paus") || (c.valor == 3 && c.suit == "Copas") || (c.valor == 7 && c.suit == "Espadas"))) {
		return true;
	} else if (!((c.valor == 0 && c.suit == "Paus") || (c.valor == 3 && c.suit == "Copas") || (c.valor == 7 && c.suit == "Espadas") || (c.valor == 3 && c.suit == "Ouros"))) {
		return valor > c.valor;
	} else {
		return 0;
	}
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

#endif

