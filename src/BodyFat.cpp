#include <cstdlib>
#include <iostream>
#include "BodyFat.h"
#include "Gotoxy.h"
#include "MainMenu.h"

using namespace std;

void BodyFat::BF()
{
	system("color 0a");

	answer = 'd';
	answer = 0;
	while (answer != 'n')
	{
		Gotoxy(34, 1); cout << "This is Parrillo Caliper Method.";
		Gotoxy(34, 3); cout << "Enter your age and weight.";
		Gotoxy(34, 5); cout << "Age: ";	cin >> age;
		Gotoxy(34, 6); cout << "Weight(kg): ";	cin >> weight;
		Gotoxy(34, 8); cout << "Enter the following parameters(mm): ";
		Gotoxy(34, 10); cout << "Chest: "; cin >> chest;
		Gotoxy(34, 11); cout << "Abdomen: ";	cin >> abdomen;
		Gotoxy(34, 12);	cout << "Suprailiac: "; cin >> suprailiac;
		Gotoxy(34, 13); cout << "Triceps: "; cin >> triceps;
		Gotoxy(34, 14); cout << "Subscapular: "; cin >> subscapular;
		Gotoxy(34, 15); cout << "Lower back: "; cin >> lower_back;
		Gotoxy(34, 16);	cout << "Thigh: ";	cin >> thigh;
		Gotoxy(34, 17); cout << "Gluteus: "; cin >> gluteus;
		Gotoxy(34, 18);	cout << "Calves: "; cin >> calves;
		result = (chest + abdomen + suprailiac + triceps + subscapular + lower_back + thigh + gluteus + calves)*12.272 / weight;
		Gotoxy(34, 20);	cout << "Your percentage of fat is: " << result; cout << "%";
		{
			Gotoxy(34, 22); cout << "Do you want it again? (y/n)";
			cin >> answer;
			system("cls");
		}
	}
}

void BodyFat::calculating()
{
	system("color 0a");

	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 620, 350, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	BF(); main_menu();
}