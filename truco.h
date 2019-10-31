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
    card(int v, int n);
    ~card();
    std::string get_suit(); 
    int get_valor();
    bool compare_valor(card );

};
class deck{
    private:

    public:
}
class menu{
    private:

    public:
    menu();
    ~menu();

}
class round : public deck{
    private:
    bool winner;//Define se foi vitória do jogador ou do bot
    static int wincount_human;
    static int wincount_bot;
    vector<int> deck; // mudei pra int pra funncionar com o cpp que eu fiz
    vector <card> played;
    public:
    void get_card();
    void remove_card();
    void cut(vector<card>);
    void rand_deck(vector<card>);
    void get_played();
    round();
    ~round();  
};
class game : public round{
    public:
        game();
        ~game();
    
    private:
}:
class player{
    private:
    std::list<card> hand;
    public:
    void play_card(round);
    void ask_truco(player);
    void acept_refuse_truco(player);
    void give_up(round);
    player();
    
};
class human : public player{
    public:
        human(std::string name, std::list<card> hand);
    
    private: 
        std::string name; 
        std::list<card> hand;
};
class bot : public player {
    public:
        bot();
        void set_id();
    
    private:
        int id;
        static int robot_numbers;
};







