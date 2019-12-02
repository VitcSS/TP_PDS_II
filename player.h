#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"hand.h"
#include"card.h"
#include"deck.h"

using namespace std;
/*
Interface utilizada para criar o bot e o humano
 */
class player{
    private:

        vector<card> player_hand; // Atributo que possui as cartas que o player possui na rodada
        int jogos_ganhos; // Atributo que mostra o número de jogos que o player ganhou
     
    protected:

        static int criacao_jogador_atual;


    public:
    	// Métodos virtuais
        virtual int get_size();

};
int player::criacao_jogador_atual = 1;

#endif
