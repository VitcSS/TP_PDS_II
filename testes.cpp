#include <iostream>

using namespace std;
int main () {
	cout << "\n _____ _____ _____ _____ _____ \n|_   _| __  |  |  |     |     |\n  | | |    -|  |  |   --|  |  |\n  |_| |__|__|_____|_____|_____|\n                               \n";
	cout << "Criado por:" << endl;
	cout << "\tGiovanni;" << endl;
	cout << "\tGuilherme;" << endl;
	cout << "\tHenrique; e" << endl;
	cout << "\tVitor" << endl;
	cout << "Pressione ENTER para jogar.";
	getchar();
	int num;
	do {
		cin.clear();
		fflush(stdin);
		cout << "Quantos jogadores (1-4): ";
		cin >> num;
		num += 10;
	} while (num > 4 || num < 1);
	cout << num;
	return 0;
}