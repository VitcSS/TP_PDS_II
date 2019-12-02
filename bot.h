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
        card play_card(); // Método que "joga" as cartas
        int ask_truco(); // Método que pede truco
        int acept_refuse_truco(); // Método que aceita ou não o truco
        void give_up(); // Método para desistir da rodada
        int get_id();

    private:
    	vector<card> player_hand; // Atributo que possui as cartas que o bot possui na rodada
        int id; // Referencia o bot com um ID
        static int robot_numbers; //Numero de bots no jogo
        int jogos_ganhos; // Atributo que mostra o número de jogos que o bot ganhou
};

int bot::robot_numbers = 0; // Inicia o número de bots com 0

<<<<<<< HEAD
// card bot::play_card(round_atual){
// 	// Joga as cartas de forma aleatória
// 	srand(time(NULL));
// 	int carta_selecionada = rand() % (player_hand.get_size_hand());
// 	return player_hand.play_card(round_atual, carta_selecionada);
// }
// // Por enquanto retorna 1 caso deva pedir e 0 caso contrario
// int bot::ask_truco(){
// 	// Pede truco com uma probabilidade de 20%
// 	srand(time(NULL));
// 	float pedir_truco = float (rand() % 11) / 10;
// 	// Pode alterar a porcentagem posteriormente
// 	if(pedir_truco > 0.2){
// 		return 1;
// 	}
// 	return 0;
// }
=======
card bot::play_card(round_atual){
	// Joga as cartas de forma aleatória
	srand(time(NULL));
	int carta_selecionada = rand() % (player_hand.size());
	return player_hand.play_card(round_atual, carta_selecionada);
}
// Por enquanto retorna 1 caso deva pedir e 0 caso contrario
int bot::ask_truco(player){
	// Pede truco com uma probabilidade de 20%
	srand(time(NULL));
	float pedir_truco = float (rand() % 11) / 10;
	// Pode alterar a porcentagem posteriormente
	if(pedir_truco > 0.2){
		return 1;
	}
	return 0;
}
>>>>>>> 986f6062439c79a4bc2f5e38b01d84dc7b92ff6b

bot::bot(deck a){
	//Lógica de criar bot deve ser implementada, depende do número de player que estará no menu/jogo e da forma como a hand é gerada
	this->id = robot_numbers;
	robot_numbers++;
}

// int bot::get_id(){
// 	return this->id;
// }
// // Por enquanto retorna 1 caso deva aceitar e 0 caso contrario
// int acept_refuse_truco(){
// 	// Aceita truco com uma probabilidade de 80%
// 	srand(time(NULL));
// 	float aceitar_truco = float (rand() % 11) / 10;
// 	if(aceitar_truco > 0.8){
// 		return 1;
// 	}
// 	return 0;
// }

// int give_up(){
// 	// Desistir da rodada com uma probabilidade de 5%
// 	srand(time(NULL));
// 	float desistir = float (rand() % 11) / 10;
// 	if(desistir > 0.05){
// 		return 1;
// 	}
// 	return 0;
// }



#endif
