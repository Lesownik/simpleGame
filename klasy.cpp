#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "klasy.h"


int Game::losowanie()//funkcja losowania
{
	srand(time(NULL));
	int wylosowana_liczba = (std::rand() % liczbaKoncowa) + liczbaStartowa;
	return wylosowana_liczba;
}

void Game::mechanika()//mechanika gry
{
	if (Game::liczbaStartowa == Game::liczbaKoncowa)
	{
		std::cout << "Naprawde?" << std::endl;
		Game::intaraktywneMenu();
	}
	else if (Game::liczbaStartowa>Game::liczbaKoncowa || Game::liczbaKoncowa<Game::liczbaStartowa)
	{
		std::cout << "Liczba startowa musi byæ mniejsza od koncowej i vice versa, bo tak 'programista'sobie zyczy. :)" << std::endl;
		Game::intaraktywneMenu();

	}
	else if (Game::liczbaStartowa > Game::liczba)
	{
		std::cout << "Podana liczba wykracza poza zakres!" << std::endl;

	}
	else if (Game::liczbaKoncowa < Game::liczba)
	{
		std::cout << "Podana liczba wykracza poza zakres!" << std::endl;
		Game::intaraktywneMenu();
	}
	else if (wylosowanie == Game::liczba)
	{
		std::cout << "Gratuluje! Udalo sie trafic!" << std::endl;
		Game::intaraktywneMenu();

	}
	else if (wylosowanie < Game::liczba)
	{
		std::cout << "Podana liczba jest za duza! Probuj dalej." << std::endl;
	}
	else if (wylosowanie > Game::liczba)
	{
		std::cout << "Podana liczba jest za mala! Probuj dalej." << std::endl;
	}

}
void Game::menu()//menu gry
{
	system("cls");
	std::cout << "Ver. 0.1.2\n By Matthew Wroblewsky" << std::endl;
	std::cout << "Witaj w grze, w ktorej zgadujesz liczbe losowa z zakresu, ktory wybierzesz." << std::endl;	//poczatek gry
	std::cout << "Podaj liczbe startowa: ";
	std::cin >> Game::liczbaStartowa;
	std::cout << "Podaj liczbe koncowa: ";
	std::cin >> Game::liczbaKoncowa;


}
void Game::intaraktywneMenu()//interaktywne minimenu
{
	std::cout << "Wybierz jedna z dwoch opcji:\n 1.Zagraj jeszcze raz.\n 2.Zakoncz gre." << std::endl;
	std::cin >> Game::opcjaMenu;
	switch (Game::opcjaMenu) {
	case 1:
		Game::menu();
		break;
	case 2:
		std::cin.get();
		break;
	default:
		std::cout << "Taka opcja nie istnieje!" << std::endl;
		Game::intaraktywneMenu();
		break;
	}

}

