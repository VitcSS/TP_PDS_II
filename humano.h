#ifndef HUMANO_H_INCLUDED
#define HUMANO_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"player.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
class human : public player{
    public:
        human(string name);
        card play_card(round_atual, int card_played);
        int ask_truco(player, bool pedir_truco);
        int acept_refuse_truco(player, bool aceitar_truco);
        void give_up(round_atual);
        int get_id();

    private:
        std::string name;
        hand player_hand;
        int jogos_ganhos;
};
human::human(std::string name){
	this->name = name;
}

card human::play_card(round_atual, int card_played){
	return player_hand.play_card(round_atual, card_played);
}

int human::ask_truco(bool pedir_truco){
	if(pedir_truco == true){
		return 1;
	}
	return 0;
}

int human::acept_refuse_truco(bool aceitar_truco){
	if(aceitar_truco == true){
		return 1;
	}
	return 0;
}


#endif
