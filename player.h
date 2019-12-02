#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"hand.h"
#include"card.h"
#include"deck.h"
#include"game.h"

using namespace std;
/*
Interface utilizada para criar o bot e o humano
 */
class player{
    private:

        hand player_hand; // Atributo que possui as cartas que o player possui na rodada
        int jogos_ganhos; // Atributo que mostra o número de jogos que o player ganhou

    public:
    	// Métodos virtuais
        virtual card play_card(round) = 0;
        virtual int ask_truco(player) = 0;
        virtual int acept_refuse_truco(player) = 0;
        virtual void give_up(round) = 0;
        player();

};

#endif