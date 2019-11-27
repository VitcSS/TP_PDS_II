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


void shuffle(vector <card> Deck){
	std::srand ( unsigned ( std::time(NULL) ) );
	std::random_shuffle ( Deck.begin(), Deck.end(), deck::myrandom);
	vector<card>::iterator iter = Deck.begin();
    for (; iter != Deck.end(); iter++) {
	    iter->imprimir();
	    cout << endl;    
    };
};

#endif

/*

#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
#include <algorithm>
//#include "deck.h"
#include "card.h"
//#include "round.h"


using namespace std;




int main(){


  vector<card> Deck;
  void shuffle(vector<card> );
  int myrandom(int );



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





int myrandom (int i) { return std::rand()%i;};


void shuffle(vector <card> Deck){
	std::srand ( unsigned ( std::time(NULL) ) );
	std::random_shuffle ( Deck.begin(), Deck.end(), myrandom);
	vector<card>::iterator iter = Deck.begin();
    for (; iter != Deck.end(); iter++) {
	    iter->imprimir();
	    cout << endl;    
    };
};





*/

