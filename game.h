#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"bot.h"
#include"round.h"
#include"player.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"deck.h"

using namespace std;

class game {
    private:
    	menu* M;
        list<player> jogadores;
    	round* R;
    public:
        game();
        ~game();
        void play();
        void end();

};

game::game() {
	M = menu();
}

void game::play() {
	M->display(jogadores); //perguntar a quantidade de humanos e de partidas a jogar e retorna lista de jogadores

	int max_pts = 0;
	while (max_pts < 12) {
		max_pts = max(get_pontuacao_jogo(*jogadores.begin()), get_pontuacao_jogo(*jogadores.end()));
		R = new round(); //mudar quando o round for implementado.
		R.play();
		delete R;
	}
	//falar vencedor e mudar players::jogos_ganhos
}

game::~game() {
	delete M;
	delete R;
}



#endif