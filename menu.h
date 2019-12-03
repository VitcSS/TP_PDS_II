#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#define WIDTH 80
#define HEIGHT 24

#ifdef _WIN32
#define CLEAR "cls"
#endif

#ifdef unix
#define CLEAR "clear"
#endif

#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include <utility>
#include "bot.h"


using namespace std;

class menu{
    public:
        menu(); //mensagem inicial
        static void display(vector<player*> players, int i); //desenha a tela de jogo
		pair<int, int> get_jogadores();
    
};

menu::menu () {
	cout << "\n _____ _____ _____ _____ _____ \n|_   _| __  |  |  |     |     |\n  | | |    -|  |  |   --|  |  |\n  |_| |__|__|_____|_____|_____|\n                               \n";
	cout << "Criado por:" << endl;
	cout << "\tGiovanni;" << endl;
	cout << "\tGuilherme;" << endl;
	cout << "\tHenrique; e" << endl;
	cout << "\tVitor" << endl;
	cout << "Pressione ENTER para jogar.";
	getchar();
}

pair<int, int> menu::get_jogadores() {
	int num, conf = 0;
	do {
		cin.clear();
		fflush(stdin);
		cout << "Quantos jogadores (1-4): ";
		cin >> num;
		getchar();
	} while (num > 4 || num < 1);
	if (num == 2){
		do {
			cin.clear();
			fflush(stdin);
			cout << "Qual configuração? 1 = humanos no mesmo time; 2 = humanos em times diferentes: ";
			cin >> conf;
            getchar();
		} while (conf > 2 || conf < 1);
	}
	return pair<int, int>(num, conf);
}

void menu::display(vector<player*> players, int i) {
	system(CLEAR);
	//Vetor de jogadores ordenado pela ordem de desenho:
	player* jogadores[4];
	jogadores[0] = players[i];
	for (int j = 1; j < 4; j++) {
		if (i + j < 4) {
			jogadores[j] = players[i + j];
		} else {
			jogadores[j] = players[i+j - 4];
		}
	}
	//Desenhar linhas opostas:
	//Primeira linha:
	int mod = 0;
	if (jogadores[0]->get_pontos() >= 10) {
		mod++;
	}
	if (jogadores[1]->get_pontos() >= 10) {
		mod++;
	}

	cout << "Pontos: " << jogadores[0]->get_pontos() << " x " << jogadores[1]->get_pontos(); 
	for(int i = 0; i < (WIDTH - jogadores[2]->get_size())/2 - 13  - mod; i++) {
		cout << " ";
	}
	for (int i = 0; i < jogadores[2]->get_size(); i++) {
		cout << "X";
	}
	cout << endl;
	//Segunda linha:
	cout << "Quedas: " << jogadores[0]->get_quedas() << " x " << jogadores[1]->get_quedas(); 
	for(int i = 0; i < (WIDTH - jogadores[2]->get_size())/2 - 13; i++) {
		cout << " ";
	}
	for (int i = 0; i < jogadores[2]->get_size(); i++) {
		cout << "x";
	}

	cout << endl;

	//Terceira e quarta linhas:
	for(int i = 0; i < (WIDTH - jogadores[2]->get_name().size())/2; i++) {
		cout << " ";
	}
	cout << jogadores[2]->get_name();
	cout << endl;

	string pont;
	pont = to_string(jogadores[2]->get_pontos()) + " pts";
	for(int i = 0; i < (WIDTH - pont.size())/2; i++) {
		cout << " ";
	}
	cout << pont;
	for (int i = 0; i < 4; i++) {
		cout << endl;
	}

	//Jogadores laterais:
	pont = to_string(jogadores[3]->get_pontos()) + " pts";
	cout << jogadores[3]->get_name() << " - " << pont;
	for (int i = 0; i < WIDTH - (jogadores[3]->get_name().size() + jogadores[1]->get_name().size() + 6 + 2 * pont.size()); i++) {
		cout << " ";
	}
	cout << jogadores[1]->get_name() << " - " << pont;
	cout << endl;
	for (int i = 1; i <= jogadores[1]->get_size(); i++) {
		if (i <= jogadores[3]->get_size()) {
			cout << "xX";
		} else {
			cout << "  ";
		}
		for (int j = 0; j < WIDTH - 4; j++) {
			cout << " ";
		}
		cout << "Xx";
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
	}
	cout << " [Cartas do Jogador]" << endl;
	for (int i = 1; i <= jogadores[0]->get_size(); i++) {
		cout << " |" << i << " - " << jogadores[0]->get_card(i-1).get_nome();
		cout << endl;
	}

}

#endif