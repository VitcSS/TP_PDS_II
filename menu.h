#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
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
#include"deck.h"
#include"game.h"

using namespace std;

class menu{
    private:
        game& G;
    public:
        menu(game&); //mensagem inicial e criação dos jogadores
        display();
        
    
};

menu::menu (game& jogo) {
	G = jogo;
	cout << "\n _____ _____ _____ _____ _____ \n|_   _| __  |  |  |     |     |\n  | | |    -|  |  |   --|  |  |\n  |_| |__|__|_____|_____|_____|\n                               ";
}

#endif