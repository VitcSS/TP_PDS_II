#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
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
#include"deck.h"
#include"game.h"
class menu{
    private:
        int num_players;
        std::list<char> players;
    public:
        menu(int num_players){
            this->num_players = num_players;
        };
        void add_players(){
            for(int i =0; i<this->num_players; i++){
                std::cout<<"Entre com o nickname"<<std::endl;
                char nick;
                std::cin>>nick;
                this->players.push_back(nick);
            };
        };
    
};