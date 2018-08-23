#include <iostream>
#include <string>
#include "Frequency.h"
#include <limits>
#include <iomanip>
#include <conio.h>
#include "windows.h"
#include "MainMenu.h"
#include "Gotoxy.h"

using namespace std;

#define Menu_Rows 13

void frequency::HZ_KZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Hertz: "; cin >> hertz; Gotoxy(34, 11); cout << "Kilohertz= " << hertz / 1000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::KZ_HZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Kilohertz "; cin >> kilohertz; Gotoxy(34, 11); cout << "Hertz= " << kilohertz / 0.001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::HZ_MZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Hertz: "; cin >> hertz; Gotoxy(34, 11); cout << "Megahertz= " << hertz / 1000000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::MZ_HZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Megahertz: "; cin >> megahertz; Gotoxy(34, 11); cout << "Hertz= " << megahertz / 0.00001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::HZ_GZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Hertz: "; cin >> hertz; Gotoxy(34, 11); std::cout << std::fixed; cout << setprecision(9) << "Gigahertz= " << hertz / 1000000000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Odgovor: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::GZ_HZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Gigahertz: "; cin >> gigahertz; Gotoxy(34, 11); cout << setprecision(11) << "Hertz= " << gigahertz / 0.000000001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::KZ_MZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Kilohertz: "; cin >> kilohertz; Gotoxy(34, 11); cout << "Megahertz= " << kilohertz / 1000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::MZ_KZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Megahertz: "; cin >> megahertz; Gotoxy(34, 11); cout << "Kilohertz= " << megahertz / 0.001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::KZ_GZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Kilohertz: "; cin >> kilohertz; Gotoxy(34, 11); cout << "Gigahertz= " << kilohertz / 1000000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::GZ_KZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Gigahertz: "; cin >> gigahertz; Gotoxy(34, 11); cout << "Kilohertz= " << gigahertz / 0.000001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::MZ_GZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Megahertz: "; cin >> megahertz; Gotoxy(34, 11); cout << "Gigahertz= " << megahertz / 1000 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::GZ_MZ()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 10); cout << "Gigahertz: "; cin >> gigahertz; Gotoxy(34, 11); cout << "Megahertz= " << gigahertz / 0.001 << endl;
		{
			Gotoxy(34, 13); cout << "Do you want it again? (y/n)\n";
			Gotoxy(34, 14); cout << "Answer: "; cin >> answer;
			system("cls");
		}
	}
}

void frequency::choice()
{
	system("color 0a");

	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 620, 350, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	const char *menu_list[Menu_Rows] = { "1: Hertz to Kilohertz", "2: Kilohertz to Hertz", "3: Hertz to Megahertz", "4: Megahertz to Hertz",
		"5: Hertz to Gigahertz", "6: Gigahertz to Hertz", "7: Kilohertz to Megahertz", "8: Megahertz to Kilohertz",
		"9: Kilohertz to Gigahertz", "10: Gigahertz to Kilohertz", "11: Megahertz to Gigahertz", "12: Gigahertz to Megahertz", "Back" };

	int i,
		xPos = 32,
		yPos[Menu_Rows] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25 };

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
			if (i == 0) { system("cls"); HZ_KZ(); choice(); }
			if (i == 1) { system("cls"); KZ_HZ(); choice(); }
			if (i == 2) { system("cls"); HZ_MZ(); choice(); }
			if (i == 3) { system("cls"); MZ_HZ(); choice(); }
			if (i == 4) { system("cls"); HZ_GZ(); choice(); }
			if (i == 5) { system("cls"); GZ_HZ(); choice(); }
			if (i == 6) { system("cls"); KZ_MZ(); choice(); }
			if (i == 7) { system("cls"); MZ_KZ(); choice(); }
			if (i == 8) { system("cls"); KZ_GZ(); choice(); }
			if (i == 9) { system("cls"); GZ_KZ(); choice(); }
			if (i == 10) { system("cls"); MZ_GZ(); choice(); }
			if (i == 11) { system("cls"); GZ_MZ(); choice(); }
			if (i == 12) { system("cls"); system("color 0a"); main_menu(); }
			break;
		}
	}
}