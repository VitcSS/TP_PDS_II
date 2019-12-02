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
  vector<card> Hand;

public:
  deck();
  // ~deck();
  void shuffle(vector<card> );
  int myrandom(int );
  void create_hand(vector<card>);
  friend class round;
  friend class hand;
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

cout<<"teste";
shuffle(Deck);


};


int deck::myrandom (int i) { return std::rand()%i;};


void deck::shuffle(vector <card> Deck){
	std::srand ( unsigned ( std::time(NULL) ) );
	int num = (rand()%30) + 3;
	for(int numero = 0; numero <= num; numero++){
		std::random_shuffle ( Deck.begin(), Deck.end());};
	vector<card>::iterator iter = Deck.begin();
    for (; iter != Deck.end(); iter++) {
	    iter->imprimir();
	    cout << endl;    
    };

	cout << endl;    
	cout << endl;    
	cout << endl;    
	create_hand(Deck);

};

void deck::create_hand(vector <card> Deck){
	vector<card>::iterator it = Deck.begin();

	for(int i=0; i<=2; i++){
		Hand.push_back(*it);
		advance(it,1);
	}

    vector<card>::iterator iter = Hand.begin();
    for (; iter != Hand.end(); iter++) {
	    iter->imprimir();
	    cout << endl;    
    };
}


#endif
