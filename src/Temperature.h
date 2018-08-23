#pragma once

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class temperatura
{
private:
	int ctemp, ftemp, ktemp;
	char answer;
public:
	void choice();
	void FH_CZ();
	void CZ_FH();
	void KL_CZ();
	void CZ_KL();
	void KL_FH();
	void FH_KL();
};

#endif 