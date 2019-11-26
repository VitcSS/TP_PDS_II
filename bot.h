#ifndef BOT_H_INCLUDED
#define BOT_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include <cstdlib>
#include"player.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

using namespace std;

class bot : public player {
    public:
        bot();
        card play_card(round_atual);
        int ask_truco(player);
        int acept_refuse_truco(player);
        void give_up(round_atual);
        int get_id();

    private:
    	hand player_hand;
        int id;
        static int robot_numbers;
        int jogos_ganhos;
}

int bot::robot_numbers = 0;

card bot::play_card(round_atual){
	srand(time(NULL));
	int carta_selecionada = rand() % (player_hand.get_size_hand());
	return player_hand.play_card(round_atual, carta_selecionada);
}
// Por enquanto retorna 1 caso deva pedir e 0 caso contrario
int bot::ask_truco(player){
	srand(time(NULL));
	float pedir_truco = float (rand() % 11) / 10;
	// Pode alterar a porcentagem posteriormente
	if(pedir_truco > 0.2){
		return 1;
	}
	return 0;
}

bot::bot(){
	//Lógica de criar bot deve ser implementada, depende do número de player que estará no menu/jogo e da forma como a hand é gerada
	this->id = this->robot_numbers;
	this->robot_numbers++;
}

int bot::get_id(){
	return this->id;
}
// Por enquanto retorna 1 caso deva aceitar e 0 caso contrario
int acept_refuse_truco(player){
	srand(time(NULL));
	float aceitar_truco = float (rand() % 11) / 10;
	// Pode alterar a porcentagem posteriormente
	if(aceitar_truco > 0.8){
		return 1;
	}
	return 0;
}





#endif