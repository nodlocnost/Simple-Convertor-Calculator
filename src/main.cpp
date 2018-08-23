/*
   @author Miroslav Ilic
*/

#include <iostream>              
#include <string>
#include <conio.h>
#include <iomanip>
#include "windows.h"
#include "Temperature.h"
#include "Frequency.h"
#include "calculator.h"
#include "BodyFat.h"
#include "MainMenu.h"

using namespace std;

#define Menu_Rows 5

HANDLE Con = GetStdHandle(STD_OUTPUT_HANDLE); // The active console screen buffer

void GoToxy(int x, int y)
{
	COORD Coord;
	Coord.X = x;
	Coord.Y = y;

	SetConsoleCursorPosition(Con, Coord);
}

void textColor(int color)
{
	SetConsoleTextAttribute(Con, color); // Sets the foreground(text) and background color attributes of characters written to the console screen buffer
}

int main()
{
	SetConsoleTitle("MIKING CALCULATOR");
	system("color 0a");

	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 620, 350, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	// Preventing the cursor from appearing
	HANDLE hConsoleOutput;
	CONSOLE_CURSOR_INFO structCursorInfo;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hConsoleOutput, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hConsoleOutput, &structCursorInfo); 
	// End of preventing the cursor from appearing

	main_menu();

	system("pause");
	return 0;
}

void main_menu()
{
	temperatura t;
	frequency f;
	calculatorMain c;
	BodyFat bf;

	const char *menu_list[Menu_Rows] = { "Temperature", "Frequency", "Calculator", "Body Fat", "Exit" };

	int i,
		xPos = 36,
		yPos[Menu_Rows] = { 5, 8, 11, 14, 17 };

	for (i = 0; i < Menu_Rows; ++i)
	{
		GoToxy(xPos, yPos[i]);
		textColor(10);
		printf("%s", menu_list[i]);
	}

	i = 0;
	while (1)
	{
		GoToxy(xPos, yPos[i]);
		textColor(18);
		printf("%s", menu_list[i]);

		switch (_getch())
		{
		case 72: if (i > 0)
		{
			GoToxy(xPos, yPos[i]);
			textColor(10);
			printf("%s", menu_list[i]);
			--i;
		}
				 break;
		case 80: if (i < Menu_Rows - 1)
		{
			GoToxy(xPos, yPos[i]);
			textColor(10);
			printf("%s", menu_list[i]);
			++i;
		}
				 break;
		case 13:
			if (i == 0) { system("cls"); t.choice(); }
			if (i == 1) { system("cls"); f.choice(); }
			if (i == 2) { system("cls"); c.choice(); }
			if (i == 3) { system("cls"); bf.calculating(); }
			if (i == 4) { exit(0); }
			break;
		}
	}
}