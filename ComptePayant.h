#pragma once
#include"Compte.h"

class ComptePayant : public Compte
{
public:
	ComptePayant(Client pro, date dt, MAD solde);
	~ComptePayant();
	void retirer(MAD m2);
	void deposer(MAD m1);

private:

};
