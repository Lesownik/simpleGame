#include <iostream>
#include "Classes.h"


int main()
{
	Game Gra;

	Gra.menu();
	Gra.drawVariable = Gra.draw();//losowanie liczb
///////////////////////////////////////////////////////////////////////////////// petla gry
	while (Gra.menuOption != 2) {
		
		std::cout << "Podaj liczbe, ktora uznajesz za wylosowana: ";
		std::cin >> Gra.number;

		Gra.mechanics();
	}


	system("PAUSE");

	return 0;
}
