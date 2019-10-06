include "truco.h"
card::card(int avalor, std::string asuit){
    valor = avalor;
    suit = asuit;
};
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