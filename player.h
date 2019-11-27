#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"bot.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

using namespace std;
/*
Interface utilizada para criar o bot e o humano
 */
class player{
    private:

        hand player_hand;
        int jogos_ganhos;

    public:
        virtual card play_card(round) = 0;
        virtual int ask_truco(player) = 0;
        virtual int acept_refuse_truco(player) = 0;
        virtual void give_up(round) = 0;
        player();

};

#endif