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
  play_card(round *r);
}
