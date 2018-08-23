#pragma once

#ifndef CALCULATOR_H
#define CALCULATOR_H

class calculatorMain
{
private:
	double left = 0, right = 0, total = 0;
	char operation = 0, answer;
	float side_A, side_B, area, distance, time, speed, number, result;

public:
	void choice();
	void calculator();
	void speedMain();
	void areaMain();
	void root();
};

#endif 