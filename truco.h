#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <iostream>
class card{
    private:
    std::string suit;
    int valor;
    public:
    card();
    card(int avalor, std::string asuit);
    ~card();
    std::string get_suit(); 
    int get_valor();
    bool compare_valor(card c);

};