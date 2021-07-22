#include"hangman.h"
void main()
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	hangman game;
	game.gui();
}

