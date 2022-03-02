#pragma once
#include"Compte.h"

class CompteEpargne :public Compte
{
public:
	CompteEpargne(Client pro, date dt, MAD solde, double TauxInteret);
	void calculInteret();
	~CompteEpargne();

private:
	double TauxInteret = 0;
};