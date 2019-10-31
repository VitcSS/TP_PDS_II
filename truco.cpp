#include "truco.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <list>
#include <vector>

std::string card::get_suit(){
    return suit;
};
int card::get_valor(){
    return valor;
};
bool card::compare_valor(card c){
    if(this->suit > c.get-suit()){
        return true;
    }
    return false;
}

round::round(){

srand(time(NULL));
vector<int>cc(40);
vector<int>cn(4);
 
	int i,j,num;
	for ( i = 0; i < 10; i++){
		cc[i] = 0;
	}

	for (j=0; j<4; j++){ 
		for(i=0; i<10; i++){
			num = rand()%10;
			while(cc[num] >= 4 ){
				num = rand()%10;
			}
			cc[num]++;
			deck.push_back(num);
		}
	}

	for (i = 0; i < (deck.size()); ++i){
		cout<< deck[i] <<" ";
	}

	cout<<endl;

	for ( i = 0; i < 4; i++){
		cn[i] = 0;
	}
	for(i=0; i<40; i++){
		num = rand()%4;
		while(cn[num] >= 10 ){
			num = rand()%4;	
		}
		cn[num]++;
		deck.insert((deck.begin()+(i+i)),(num));
			
	}
	for (i = 0; i < (deck.size()); ++i){ //esses for com cout<< só servem pra caso vocês queiram sair checando como está sendo a criação do deck
		cout<< deck[i] <<" ";
	}

	for(i=0; i<56; i++){
		deck.erase(deck.begin());	
	}

	cout<<endl;

	for (i = 0; i < (deck.size()); ++i){
		cout<< deck[i] <<" ";
	}

}	


card::card (int v, int s){ 

	if (s=0)
			suit = "Paus";
	if (s=1)
		suit = "Espadas";
	if (s=2)
		suit = "Ouros";
	if (s=3)
		suit = "Copas";
	valor = v;
}
