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


using namespace std;
/*
Classe  que herda de player, representa os bots.
*/
class bot : public player {
    public:
        bot(deck); // Construtor do bot
        card play_card(int); // Método que "joga" as cartas
        int ask_truco() override; // Método que pede truco
        int accept_refuse_truco() override; // Método que aceita ou não o truco
        int give_up(); // Método para desistir da rodada
        int get_id();
		int get_size() override;
		void atualizar_jogador(deck);
		std::string get_name() override;

    private:
		static int id_atual;
        int id; // Referencia o bot com um ID
        static int robot_numbers; //Numero de bots no jogo
};

int bot::id_atual = 1;

bot::bot(deck a){
	this->id = bot::id_atual;
    this->pontos = 0;
	is_bot = true;
	bot::id_atual++;
	bot::atualizar_jogador(a);


}

void bot::atualizar_jogador(deck a){
    this->quedas = 0;
    if(criacao_jogador_atual == 1){
        player_hand = a.Hand_player_1;
    }
    if(criacao_jogador_atual == 2){
        player_hand = a.Hand_player_2;
    }
    if(criacao_jogador_atual == 3){
        player_hand = a.Hand_player_3;
    }
    if(criacao_jogador_atual == 4){
        player_hand = a.Hand_player_4;
        criacao_jogador_atual = 1;
    }
    criacao_jogador_atual++;
}

int bot::robot_numbers = 0; // Inicia o número de bots com 0

card bot::play_card(int i){
	// Joga as cartas de forma aleatória
	srand(time(NULL));
	int carta_selecionada = rand() % (player_hand.size());
	card carta = player_hand[carta_selecionada];
    player_hand[carta_selecionada] = player_hand[player_hand.size()-1];
    player_hand.pop_back();
    return carta;
}
// Por enquanto retorna 1 caso deva pedir e 0 caso contrario
int bot::ask_truco(){
	// Pede truco com uma probabilidade de 20%
	srand(time(NULL));
	float pedir_truco = float (rand() % 11) / 10;
	// Pode alterar a porcentagem posteriormente
	if(pedir_truco > 0.2){
		return 1;
	}
	return 0;
}

int bot::get_id(){
	return this->id;
}
// Por enquanto retorna 1 caso deva aceitar e 0 caso contrario
int bot::accept_refuse_truco(){
	// Aceita truco com uma probabilidade de 80%
	srand(time(NULL));
	float aceitar_truco = float (rand() % 11) / 10;
	if(aceitar_truco > 0.8){
		return 1;
	}
	return 0;
}

int bot::give_up(){
	// Desistir da rodada com uma probabilidade de 5%
	srand(time(NULL));
	float desistir = float (rand() % 11) / 10;
	if(desistir > 0.05){
		return 1;
	}
	return 0;
}

int bot::get_size(){
	return this->player_hand.size();
}

string bot::get_name() {
	return "Bot " + to_string(id);
}


#endif
