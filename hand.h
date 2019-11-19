#ifndef HAND_H_INCLUDED
#define HAND_H_INCLUDED
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
#include"card.h"
#include"menu.h"
#include"deck.h"
#include"game.h"

using namespace std;

class hand: public deck(){
  private:
  
  public:
  void play_card(round *r, int selec){
    if(selec == 0)
      return;
    if(selec > this->Deck.size() || selec < 0){
      cout<<"A carta de número "<<selec<<" não existe!!!"<<endl;
      cout<<"Seu número de cartas é: "<<this->Deck.size();
      return;
    }
    else if(selec>0){
      list<card> iterator = deck.begin();
      advance(iterator, (selec-1));
      *(r.played.Deck.push_back(*(iterator)));
      this->Deck.erase(iterator);// Conferir funcionamento da função.
      return;
    }
  }
  int get_size_hand(){
    return Deck.size();
  }
  void burn_hand(round *r){
  list<card> iterator = Deck.begin();  
  for(int i = 1; i =< (this->Deck.size()); i++){
    advance(iterator, 1);
    *(r.Deck.Deck.push_back(*(iterator)));
  }
    this->Deck.erase(Deck.begin(), Deck.end());
    return
  }
};
