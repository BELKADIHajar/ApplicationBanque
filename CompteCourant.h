#pragma once
#include"Compte.h"

class CompteCourant :public Compte
{
public:
	CompteCourant(Client pro, date dt, MAD solde, MAD decouvert);
	void retirer(MAD montant);
	~CompteCourant();

private:
	MAD decouvert;
};
