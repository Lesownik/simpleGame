#pragma once
#ifndef GAME
#define GAME



class Game {
	//zmienne
public:
	int liczbaStartowa, liczbaKoncowa, liczba, wylosowanie, opcjaMenu;
	std::string slwo;
	//funkcje
	int losowanie();
	void mechanika();
	void menu();
	void intaraktywneMenu();


};

#endif