#include "windows.h"

#pragma once

#ifndef Gotoxy_H
#define Gotoxy_H

namespace
{
	HANDLE con = GetStdHandle(STD_OUTPUT_HANDLE);

	void Gotoxy(int x, int y)
	{
		COORD Coord;
		Coord.X = x;
		Coord.Y = y;

		SetConsoleCursorPosition(con, Coord);
	}

	void textColor(int color)
	{
		SetConsoleTextAttribute(con, color);
	}
}

#endif