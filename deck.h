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


using namespace std;

class deck{
private:
  vector<card> Deck;

public:
  deck();
  // ~deck();
  void shuffle(vector<card> );
  int myrandom(int );
  friend class round;
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
};

int deck::myrandom (int i) { return std::rand()%i;};

void deck::shuffle(vector <card> Deck){
	std::srand ( unsigned ( std::time(NULL) ) );
	int num = (rand()%30) + 3;
	for(int numero = 0; numero <= num; numero++){
		std::random_shuffle ( Deck.begin(), Deck.end());
	};
	vector<card>::iterator iter = Deck.begin();
    	for (; iter != Deck.end(); iter++) {
	    iter->imprimir();
	    cout << endl;    
    	};
};


#endif
