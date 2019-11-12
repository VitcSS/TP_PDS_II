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
  list<card> cards;
public:
  deck();
  ~deck();
  void embaralhar();
  void cut();
  void remove_card(deck *h);
  void add_card(deck *h);
}
