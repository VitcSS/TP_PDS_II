#include <iostream>
#include <string>
#include "menu.h"
#define WIDTH 80
#define HEIGHT 24

void desenhar_maos_opostas(int a, int b, int c) {
	for(int i = 0; i < (WIDTH - b)/2; i++) {
		cout << " ";
	}
	for (int i = 0; i < b; i++) {
		cout << "X";
	}
}

using namespace std;
int main () {
	deck D = deck();
	vector<player*> bots;
	for (int i = 0; i < 4; i++) {
		bots.push_back(new bot(D));
	}
	bots[0]->get_card(0);
	getchar();
	for (int i = 0; i < 4; i++) {
		menu::display(bots , i);
	}
	

	return 0;
}