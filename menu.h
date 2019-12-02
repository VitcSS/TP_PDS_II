#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#define WIDTH 80
#define HEIGHT 24
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
        static void display(vector<player> players, int i); //desenha a tela de jogo
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

void menu::display(vector<player> players, int i) {
	//Vetor de jogadores ordenado pela ordem de desenho:
	player jogadores[4];
	jogadores[0] = players[i];
	for (int j = 1; j < 4; j++) {
		if (i + j < 4) {
			jogadores[j] = players[i + j];
		} else {
			jogadores[j] = players[i+j - 4];
		}
	}
	//Desenhar linha oposta:
	for(int i = 0; i < (WIDTH - jogadores[2].get_size())/2; i++) {
		cout << " ";
	}
	for (int i = 0; i < jogadores[2].get_size(); i++) {
		cout << "X";
	}
}

#endif