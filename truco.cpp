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
"Construtor de um humano: recebe name como o nome que ele define e hand como as cartas que possui"
human::human(std::string name, std::list<card> hand){
	this->name = name;
	this->hand = hand;
}
"Atributo static que armazena o numero de bots no jogo"
int bot::robot_numers = 0;
"construtor de bots: id é a referencia para como identificar o bot e aumenta o numero de robos"
void bot::set_id(){
	this->id = this->robot_numers++;
	this->robot_numers++;
}