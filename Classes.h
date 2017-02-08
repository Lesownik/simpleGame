#pragma once
#ifndef GAME
#define GAME



class Game {
	//zmienne
public:
	int startNumber, endNumber, number, drawVariable, menuOption;
	std::string slwo;
	//funkcje
	int draw();
	void mechanics();
	void menu();
	void interactiveMenu();


};

#endif
