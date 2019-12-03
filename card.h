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
		char numero;
		char naipe;
    public:
        card(int v,int s); // v é o valor da carta, ou seja, A, rei, 4, etc.  S é o naipe da carta, por exemplo, ouros ou espadas
        string get_suit();
        int get_valor();
        string get_nome();
		string get_nome_completo();
        void imprimir();
        bool operator>(const card& c) const;
        bool operator==(const card& c) const;
		char get_numero();
		char get_naipe();

};

card::card (int v, int s){ 
	switch (s) {
		case 0:
			suit = "Paus";
			naipe = 'p';
			break;
		case 1:
			suit = "Espadas";
			naipe = 'e';
			break;
		case 2:
			suit = "Ouros";
			naipe = 'o';
			break;
		case 3:
			suit = "Copas";
			naipe = 'c';
			break;
	}
	valor = v;
	switch (valor) {
		case 0:
			nome = "Quatro";
			numero = '4';
			break;
		case 1:
			nome = "Cinco";
			numero = '5';
			break;
		case 2:
			nome = "Seis";
			numero = '6';
			break;
		case 3:
			nome = "Sete";
			numero = '7';
			break;
		case 4:
			nome = "Dama";
			numero = 'Q';
			break;
		case 5:
			nome = "Valete";
			numero = 'J';
			break;
		case 6:
			nome = "Rei";
			numero = 'K';
			break;
		case 7:
			nome = "As";
			numero = 'A';
			break;
		case 8:
			nome = "Dois";
			numero = '2';
			break;
		case 9:
			nome = "Tres";
			numero = '3';
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

string card::get_nome_completo() {
	return nome + " de " + suit;
}

char card::get_numero() {
	return numero;
}

char card::get_naipe() {
	return naipe;
}

#endif

