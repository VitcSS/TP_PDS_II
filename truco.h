#ifndef TRUCO_H
#define TRUCO_H
#include "bot.h"
#include "humano.h"
#include "card.h"
#include "deck.h"
#include "menu.h"
#include "player.h"
#include "round.h"

void atualizar(vector<player*> jogadores, deck D) {
    for (player* jogador : jogadores) {
		jogador->atualizar_jogador(D);
	}
}

#endif