#pragma once

#ifndef BODYFAT_H
#define BODYFAT_H

class BodyFat
{
private:
	float result = 0;
	int chest, abdomen, thigh, triceps, gluteus, calves, subscapular, lower_back, suprailiac, weight;
	int age;
	char answer;
public:
	void calculating();
	void BF();
};

#endif 