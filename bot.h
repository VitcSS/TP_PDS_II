#ifndef BOT_H_INCLUDED
#define BOT_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include <cstdlib>
#include"player.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

using namespace std;

class bot : public player {
    public:
        bot();
        void set_id();
        card play_card(round);
        void ask_truco(player);
        void acept_refuse_truco(player);
        void give_up(round);

    private:
    	hand player_hand;
        int id;
        static int robot_numbers;
}

card bot::play_card(round){
	srand(time(NULL));
	int carta_selecionada = rand() % (player_hand.get_size_rand());



}