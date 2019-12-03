#ifndef HUMANO_H_INCLUDED
#define HUMANO_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"bot.h"
#include"player.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

class human : public player{
    public:
        human(string name, deck);
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
human::human(std::string name, deck a){
	this->name = name;
    if(criacao_jogador_atual == 1){
        player_hand = a.Hand_player_1;
        vector<card>::iterator iter = player_hand.begin();
        for (; iter != player_hand.end(); iter++) {
            iter->imprimir();
            cout << endl;
        }
    }
    if(criacao_jogador_atual == 2){
        player_hand = a.Hand_player_2;
        vector<card>::iterator iter = player_hand.begin();
        for (; iter != player_hand.end(); iter++) {
            iter->imprimir();
            cout << endl;
        }
    }
    if(criacao_jogador_atual == 3){
        player_hand = a.Hand_player_3;
        vector<card>::iterator iter = player_hand.begin();
        for (; iter != player_hand.end(); iter++) {
            iter->imprimir();
            cout << endl;
        }
    }
    if(criacao_jogador_atual == 4){
        player_hand = a.Hand_player_4;
        vector<card>::iterator iter = player_hand.begin();
        for (; iter != player_hand.end(); iter++) {
            iter->imprimir();
            cout << endl;
        }
    }
    criacao_jogador_atual++;
    



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
