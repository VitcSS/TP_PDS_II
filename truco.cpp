#include "truco.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <list>
#include <vector>

std::string card::get_suit(){
    return suit;
};
int card::get_valor(){
    return valor;
};
bool card::compare_valor(card c){
    if(this->suit > c.get-suit()){
        return true;
    }
    return false;
}


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

//excluir depois
void card::imprimir() {
	cout << nome << " de " << suit;
}

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
	
"Construtor de um humano: recebe name como o nome que ele define e hand como as cartas que possui"
human::human(std::string name, std::list<card> hand){
	this->name = name;
	this->hand = hand;
}
"Atributo static que armazena o numero de bots no jogo"
int bot::robot_numers = 0;
"construtor de bots: id é a referencia para como identificar o bot e aumenta o numero de robos"
void bot::set_id(){
	this->id = this->robot_numers++;
	this->robot_numers++;
}
