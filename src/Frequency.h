#include <iostream>

using namespace std;

#pragma once

#ifndef FREQUENCY_H
#define FREQUENCY_H

class frequency
{
private:
	double hertz, kilohertz, megahertz, gigahertz;
	char answer;

public:
	void choice();
	void HZ_KZ();
	void KZ_HZ();
	void HZ_MZ();
	void MZ_HZ();
	void HZ_GZ();
	void GZ_HZ();
	void KZ_MZ();
	void MZ_KZ();
	void KZ_GZ();
	void GZ_KZ();
	void MZ_GZ();
	void GZ_MZ();
};

#endif 