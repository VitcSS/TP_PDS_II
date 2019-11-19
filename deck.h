#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include"bot.h"
#include"player.h"
#include"humano.h"
#include"hand.h"
#include"card.h"
#include"menu.h"
#include"game.h"

using namespace std;

class deck{
private:
  vector<card> Deck;
public:
  deck();
  // ~deck();
  void cut();
  void shuffle();
  friend class round;
};

deck::deck(){

srand(time(NULL));
vector<card> Deck;
int i = 0;
while (i < 10) {
	int j = 0;
	while (j < 4) {
		Deck.push_back(card(i, j));
		j++;
	}
	i++;
}
vector<card>::iterator iter = Deck.begin();
for (; iter != Deck.end(); iter++) {
	iter->imprimir();
	cout << endl;    

shuffle(&Deck, 40);

}



}

void shuffle(int *vet, int vetSize){ //mecher dps
	for (int i = 0; i < vetSize; i++)
	{
		int r = rand() % vetSize;
		card temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
	}


}

#endif
