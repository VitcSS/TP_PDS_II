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

class round{
    private:
        vector<card> mesa;
        int primeiro;
        int ganhador;
    public:
        round(int);
        vector<card> get_mesa();
        int get_ganhador();
        void add_carta();
        void limpar();
};

round::round(int primeiro){
    this->primeiro = primeiro;
}

#endif
