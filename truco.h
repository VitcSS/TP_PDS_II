#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
#include <list>
class card{
    private:
    std::string suit;
    int valor;
    public:
    card();
    card(int, std::string);
    ~card();
    std::string get_suit(); 
    int get_valor();
    bool compare_valor(card );

};
class round{
    private:
    bool winner;//Define se foi vitória do jogador ou do bot
    static int wincount_human;
    static int wincount_bot;
    vector<card, 40> deck;
    vector <card, 40> played;
    public:
    void get_card();
    void remove_card();
    void cut(vector<card>);
    void rand_deck(vector<card>);
    void get_played();
    void get_top_deck();
    round();
    ~round();  
};
class game : public round{
    public:
    
    private:
}:
class player{
    private:
    std::list<card> hand;
    public:
    void play_card(round);
    void ask_truco(player);
    void acept_truco(player);
    void refuse_truco(player);
    void give_up(round);
    
};
class human : public player{
    public:
    
    private:    
};
class bot : public player {
    public:
    
    private:
};

