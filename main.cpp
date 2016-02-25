#include <iostream>
#include "klasy.h"


int main()
{
	Game Gra;

	Gra.menu();


	Gra.wylosowanie = Gra.losowanie(); //losowanie liczb
									   ///////////////////////////////////////////////////////////////////////////////// petla gry
	while (Gra.opcjaMenu != 2) {
		std::cout << "Podaj liczbe, ktora uznajesz za wylosowana: ";
		std::cin >> Gra.liczba;

		Gra.mechanika();
	}


	system("PAUSE");

	return 0;
}