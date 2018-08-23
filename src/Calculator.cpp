#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include "calculator.h"
#include "windows.h"
#include "Gotoxy.h"
#include "MainMenu.h"

#define Menu_Rows 5

using namespace std;

void calculatorMain::calculator()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		double do_operation(const double, const double, const char);
		cout << "Enter the operation: ";
		cin >> left;

		while (cin.peek() != '\n')
		{
			cin >> operation >> right;
			total = do_operation(left, right, operation);
			left = total;
		}
		cout << "Result is: " << total << endl << endl;
		{
			cout << "Do you want it again? (y/n)\n";
			cin >> answer;
			system("cls");
		}
	}
}

void calculatorMain::speedMain()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		cout << "Enter the distance traveled: ";
		cin >> distance;
		cout << "Enter the time: ";
		cin >> time;
		speed = distance / time;
		cout << "Speed is: " << speed;
		{
			cout << "Do you want it again? (y/n)\n";
			cin >> answer;
			system("cls");
		}
	}
}

void calculatorMain::areaMain()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		cout << "Enter the side A: ";
		cin >> side_A;
		cout << "Enter the side B: ";
		cin >> side_B;
		area = side_A * side_B;
		cout << "Area is: " << area << endl << endl;
		{
			cout << "Do you want it again? (y/n)\n";
			cin >> answer;
			system("cls");
		}
	}
}

void calculatorMain::root()
{
	system("color 0a");
	answer = 'y';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(31, 10); cout << "Enter a positive number: "; cin >> number;
		if (number < 0)
		{
			Gotoxy(31, 11); cout << "The number is negative!\n";
		}
		else
		{
			result = sqrt(number);
			Gotoxy(31, 12); cout << "Square root is: " << result << endl << endl;
		}
		{
			Gotoxy(31, 14); cout << "Do you want it again? (y/n)\n"; cin >> answer;
			system("cls");
		}
	}
}

void calculatorMain::choice()
{
	system("color 0a");

	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 620, 350, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	const char *menu_list[Menu_Rows] = { "1- Classic calculator", "2- Surface of the rectangle", "3- Speed", "4- Square root", "5- Back" };

	int i,
		xPos = 32,
		yPos[Menu_Rows] = { 4, 7, 10, 13, 16 };
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
			if (i == 0) { system("cls"); calculator(); choice(); }
			if (i == 1) { system("cls"); speedMain(); choice(); }
			if (i == 2) { system("cls"); areaMain(); choice(); }
			if (i == 3) { system("cls"); root(); choice(); }
			if (i == 4) { system("cls"); system("color 0a"); main_menu(); }
			break;
		}
	}
}

// Calculator logic
double do_operation(const double left, const double right, const char operation)
{
	double result = 0;

	switch (operation)
	{
	case '+': result = left + right;  break;
	case '-': result = left - right;  break;
	case '*': result = left * right;  break;
	case '/': result = right != 0 ? left / right : 0;  break;
	default: cout << "Unknown operator!\n";
	}
	return result;
}