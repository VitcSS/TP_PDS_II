#ifndef ROUND_H_INCLUDED
#define ROUND_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"player.h"
#include"card.h"
#include"humano.h"
#include"bot.h"


using namespace std;

class Round{
    private:
        vector<card> mesa;
        int primeiro;
        int ganhador;
        int truco;
        vector<player*>* jogadores;
    public:
        Round(int i);
        vector<card> get_mesa();
        int get_ganhador();
        void add_carta();
        void limpar();
};

Round::Round(int primeiro){
    this->primeiro = primeiro;
}

#endif
