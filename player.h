#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"card.h"
#include"deck.h"

using namespace std;
/*
Interface utilizada para criar o bot e o humano
 */
class player{
    protected:
        vector<card> player_hand; // Atributo que possui as cartas que o player possui na rodada
        int pontos;
        int quedas;
        static int criacao_jogador_atual;
        bool is_bot;


    public:
    	// Métodos virtuais
        virtual int get_size() {
            return 0;
        }
        void add_pontos(int i) {
            pontos += i;
        }
        int get_pontos() {
            return pontos;
        }
        void ganha_queda() {
            quedas += 1;
        }
        int get_quedas() {
            return quedas;
        }
        virtual std::string get_name() {
            return "";
        }
        card get_card(int i) {
            return player_hand[i];
        }
        void atualizar_jogador(deck D) {
            return;
        }
        card play_card(int i) {
            return player_hand[0];
        }
        bool is_a_bot() {
            return is_bot;
        }

};
int player::criacao_jogador_atual = 1;

#endif
