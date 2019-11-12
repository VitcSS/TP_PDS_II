#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
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
#include"menu.h"
#include"deck.h"

using namespace std;

class game : public round{
    public:
        game();
        ~game();

    private:
};
