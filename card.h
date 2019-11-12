#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
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

class card{
    private:
        string suit; //naipe
        int valor;
        string nome;
    public:
        card(int v,int n);
//        ~card(); dando erro, não implementado
        string get_suit();
        int get_valor();
        void imprimir(); //excluir depois
        bool compare_valor(card );

};
