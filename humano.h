#ifndef HUMANO_H_INCLUDED
#define HUMANO_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"player.h"

class human : public player{
    public:
        human(string name, deck);
        card play_card();
        int ask_truco(bool);
        int acept_refuse_truco(bool);
        int give_up(bool);
        int get_id();
        int get_size();
        void atualizar_jogador(deck);
		std::string get_name();
		
    private:
        std::string name;
        int id; // Referencia o bot com um ID
        static int robot_numbers; //Numero de bots no jogo
};
human::human(std::string name, deck a){
    this->name = name;
    human::atualizar_jogador(a);
}

void human::atualizar_jogador(deck a){
    this->pontos = 0;
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

card human::play_card(){ //COLOCAR PARA TRATAR EXCESSÃO // TEM QUE DESTRUIR A CARTA QUE JÁ FOI TIRADA?
    int x;
    bool loop = true;
    int carta_selecionada;
    while(loop){
        cin >> x; 
        if( x<1 || x>player_hand.size())
            throw invalid_argument("Você não possui essa carta na mão");
        if( x>0 && x<player_hand.size() )
            loop = false;
    }
    carta_selecionada = x;
    return player_hand.at(carta_selecionada);

}


int human::ask_truco(bool pedir_truco){
	if(pedir_truco == true){
		return 1;
	}
	return 0;
}

int human::acept_refuse_truco(bool aceitar_truco){
	if(aceitar_truco == true){
		return 1;
	}
	return 0;
}

int human::get_id(){
	return this->id;
}

int human::give_up(bool desistir){
	if(desistir == true){
		return 1;
	}
	return 0;
}

int human::get_size() {
	return this->player_hand.size();
}

std::string human::get_name() {
	return this->name;
}

#endif
