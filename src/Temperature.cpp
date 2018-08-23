#include <iostream>
#include <string>
#include "Temperature.h"
#include "windows.h"
#include "Gotoxy.h"
#include "conio.h"
#include "MainMenu.h"

#define Menu_Rows 7

using namespace std;

void temperatura::FH_CZ()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Fahrenheit: "; cin >> ftemp; Gotoxy(34, 11); cout << "Celsius= " << (ftemp - 32) / 1.8 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::CZ_FH()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Enter celsius: "; cin >> ctemp; Gotoxy(34, 11); cout << "Fahrenheit= " << (ctemp * 1.8) + 32 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::KL_CZ()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Enter kelvin: "; cin >> ktemp; Gotoxy(34, 11); cout << "Celsius= " << ktemp - 273.5 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::CZ_KL()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Enter celsius: "; cin >> ctemp; Gotoxy(34, 11); cout << "Kelvin= " << ctemp + 273.5 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::KL_FH()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Enter kelvin: "; cin >> ktemp;	Gotoxy(34, 11); cout << "Fahrenheit= " << ktemp * 9 / 5 - 459.67 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::FH_KL()
{
	system("color 0a");

	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Enter fahrenheit: "; cin >> ftemp;	Gotoxy(34, 11); cout << "Kelvin= " << (ftemp + 459.67) * 5 / 9 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void temperatura::choice()
{
	system("color 0a");

	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 620, 350, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	const char *menu_list[Menu_Rows] = { "1: Fahrenheit to Celsius", "2: Celsius to Fahrenheit", "3: Kelvin to Celsius",
		"4: Celsius to Kelvin", "5: Kelvin to Fahrenheit", "6: Fahrenheit to Kelvin", "Back" };
	int i,
		xPos = 32,
		yPos[Menu_Rows] = { 3, 6, 9, 12, 15, 18, 21 };

	for (i = 0; i < Menu_Rows; ++i)
	{
		Gotoxy(xPos, yPos[i]);
		textColor(10);
		printf("%s", menu_list[i]);
	}

	i = 0;
	while (1)
	{
		Gotoxy(xPos, yPos[i]);
		textColor(18);
		printf("%s", menu_list[i]);

		switch (_getch())
		{
		case 72: if (i > 0)
		{
			Gotoxy(xPos, yPos[i]);
			textColor(10);
			printf("%s", menu_list[i]);
			--i;
		}
				 break;
		case 80: if (i < Menu_Rows - 1)
		{
			Gotoxy(xPos, yPos[i]);
			textColor(10);
			printf("%s", menu_list[i]);
			++i;
		}
				 break;
		case 13:
			if (i == 0) { system("cls"); FH_CZ(); choice(); }
			if (i == 1) { system("cls"); CZ_FH(); choice(); }
			if (i == 2) { system("cls"); KL_CZ(); choice(); }
			if (i == 3) { system("cls"); CZ_KL(); choice(); }
			if (i == 4) { system("cls"); KL_FH(); choice(); }
			if (i == 5) { system("cls"); FH_KL(); choice(); }
			if (i == 6) { system("cls"); system("color 0a"); main_menu(); }
			break;
		}
	}
}