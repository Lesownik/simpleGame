#include <iostream>
#include "Classes.h"
#include<windows.h>


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
	SetConsoleTitle("Gra");
	
	COORD dwConsoleSize;
	dwConsoleSize.X = 1920;
	dwConsoleSize.Y = 1080;
	PCOORD dwConsoleSizePointer = &dwConsoleSize;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, dwConsoleSizePointer);


	Game Gra;

	Gra.interactiveMenu();
	//Gra.drawVariable = Gra.draw();//losowanie liczb
///////////////////////////////////////////////////////////////////////////////// petla gry
	while (Gra.menuOption != 2) {
		
		std::cout << "Podaj liczbe, ktora uznajesz za wylosowana: ";
		std::cin >> Gra.number;

		Gra.mechanics();
	}


	system("PAUSE");

	return 0;
}
