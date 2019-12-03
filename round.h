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

using namespace std;

class Round{
    private:
        vector<card> mesa;
        int primeiro;
        int ganhador;
        int truco;
        vector<player*>* jogadores;
    public:
        Round(int i, vector<player*>*);
        vector<card> get_mesa();
        int get_ganhador();
        void add_carta();
        void limpar();
};

Round::Round(int primeiro, vector<player*>* jgs){
    this->primeiro = primeiro;
    this->jogadores = jgs;
}

#endif
