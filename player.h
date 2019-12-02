#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"card.h"
#include"deck.h"

using namespace std;
/*
Interface utilizada para criar o bot e o humano
 */
class player{
    private:

        vector<card> player_hand; // Atributo que possui as cartas que o player possui na rodada
        int jogos_ganhos; // Atributo que mostra o número de jogos que o player ganhou
        static int criacao_jogador_atual;

    public:
    	// Métodos virtuais
        virtual card play_card(round) = 0;
        virtual int ask_truco(player) = 0;
        virtual int acept_refuse_truco(player) = 0;
        virtual void give_up(round) = 0;
        player(deck);

};

int player::criacao_jogador_atual = 1;

player::player(deck a){
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
#endif
