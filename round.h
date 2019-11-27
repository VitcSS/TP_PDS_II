#ifndef ROUND_H_INCLUDED
#define ROUND_H_INCLUDED
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
#include"game.h"

using namespace std;

class round{
    private:
    bool winner;//Define se foi vitória do jogador ou do bot
    static int wincount_human;
    static int wincount_bot;
    deck Deck;
    deck played;
    public:
    void get_card();
    void remove_card(player *p, int i){
        
    }
    void cut(); //Usa o deck 
    void rand_deck(); //Usa o deck
    void get_played();
    round();
    ~round();  
};
void cut(){
    return;
};
#endif
