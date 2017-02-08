#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <ctime>
#include <windows.h>
#include "Classes.h"


int Game::draw()//funkcja losowania
{
	srand(time(NULL));
	int draw = (std::rand() % howManyNumbers) + startNumber;
	return draw;
	
}

void Game::mechanics()//mechanika gry
{
	if (Game::startNumber == Game::howManyNumbers)
	{
		Sleep(2000);
		std::cout << "Naprawde?" << std::endl;
		Game::interactiveMenu();
	}
	else if (Game::startNumber>Game::howManyNumbers || Game::howManyNumbers<Game::startNumber)
	{
		Sleep(2000);
		std::cout << "Liczba startowa musi być mniejsza od koncowej i vice versa, bo tak 'programista'sobie zyczy. :)" << std::endl;
		Game::interactiveMenu();

	}
	else if (Game::startNumber > Game::number)
	{
		std::cout << "Podana liczba wykracza poza zakres!" << std::endl;

	}
	else if (Game::howManyNumbers < Game::number)
	{
		Sleep(2000);
		std::cout << "Podana liczba wykracza poza zakres!" << std::endl;
		Game::interactiveMenu();
	}
	else if (drawVariable == Game::number)
	{
		std::cout << "Gratuluje! Udalo sie trafic!" << std::endl;
		Sleep(2000);
		Game::interactiveMenu();

	
		

	}
	else if (drawVariable < Game::number)
	{
		std::cout << "Podana liczba jest za duza! Probuj dalej." << std::endl;
	}
	else if (drawVariable > Game::number)
	{
		std::cout << "Podana liczba jest za mala! Probuj dalej." << std::endl;
	}

}
void Game::drawedNumber()//menu gry
{
	std::cout << "Podaj od ktorej liczby losowac: ";
	std::cin >> Game::startNumber;
	std::cout << "Podaj ile liczb losowac: ";
	std::cin >> Game::howManyNumbers;
	Game::drawVariable = Game::draw();
	

}
void Game::interactiveMenu()//interaktywne minimenu
{
	system("cls");
	std::cout << "Ver. 0.1.3\n By Matthew Wroblewsky" << std::endl;
	std::cout << "Witaj w grze, w ktorej zgadujesz liczbe losowa z zakresu, ktory wybierzesz." << std::endl;	//poczatek gry
	std::cout << "Wybierz jedna z dwoch opcji:\n 1.Zagraj.\n 2.Zakoncz gre." << std::endl;
	std::cin >> Game::menuOption;
	switch (Game::menuOption) {
	case 1:
		drawedNumber();
		
		break;
	case 2:
		std::cin.get();
		break;
	default:
		std::cout << "Taka opcja nie istnieje!" << std::endl;
		Game::interactiveMenu();
		break;
	}

}
