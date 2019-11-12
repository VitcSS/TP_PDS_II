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

class player{
    private:
        std::list<card> hand;
    public:
        void play_card(round);
        void ask_truco(player);
        void acept_refuse_truco(player);
        void give_up(round);
        player();

};
