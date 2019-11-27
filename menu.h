#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>

using namespace std;

class menu{
    public:
        menu(); //mensagem inicial
        void display(); //desenha a tela de jogo
    
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
	int num, conf;
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
	list<string> lista;
	if (num != 2) {
		for (int i = 0; i < num; i++) {
			lista.push_back("Humano");
		}
		for (int i = num; i < 4; i++) {
			lista.push_back("Bot");
		}
	} else if (conf == 1) {
        for (int i = 0; i < 2; i++) {
			lista.push_back("Humano");
            lista.push_back("Bot");
		}
    } else {
        for (int i = 0; i < 2; i++) {
            lista.push_back("Humano");
        }
        for (int i = 0; i < 2; i++) {
            lista.push_back("Bot");
        }
    }
	for (list<string>::iterator iter = lista.begin(); iter != lista.end(); iter++) {
		cout << *iter << endl;
	}
	//bot::robot_numbers = 4 - num;
}

#endif