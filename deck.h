#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include<algorithm>
#include "card.h"
#include "player.h"


using namespace std;

class deck{
	friend class bot;
	friend class human;
private:
  vector<card> Deck;
  vector<card> Hand_player_1;
  vector<card> Hand_player_2;
  vector<card> Hand_player_3;
  vector<card> Hand_player_4;

public:
  deck();
  // ~deck();
  void shuffle(vector<card> );
  int myrandom(int );
  void create_hand(vector<card>);
  friend class round;
  friend class hand;
  friend class bot;
};

deck::deck(){

	srand(time(NULL));
	int i = 0;
	while (i < 10) {
		int j = 0;
		while (j < 4) {
			Deck.push_back(card(i, j));
			j++;
		};
		i++;
	};
	shuffle(Deck);


}


int deck::myrandom (int i) {
	return std::rand()%i;
}


void deck::shuffle(vector <card> Deck){
	std::srand ( unsigned ( std::time(NULL) ) );
	int num = (rand()%30) + 3;
	for(int numero = 0; numero <= num; numero++){
		std::random_shuffle ( Deck.begin(), Deck.end());
	}
	create_hand(Deck);

}

void deck::create_hand(vector <card> Deck){
	vector<card>::iterator it = Deck.begin();

	for(int i=0; i<=2; i++){
		Hand_player_1.push_back(*it);
		advance(it,1);
	}
	for(int i=0; i<=2; i++){
		Hand_player_2.push_back(*it);
		advance(it,1);
	}
	for(int i=0; i<=2; i++){
		Hand_player_3.push_back(*it);
		advance(it,1);
	}
	for(int i=0; i<=2; i++){
		Hand_player_4.push_back(*it);
		advance(it,1);
	}
}


#endif
