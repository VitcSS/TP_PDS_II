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
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

class human : public player{
    public:
        human(std::string name, std::list<card> hand);

    private:
        std::string name;
        std::list<card> hand;
};
