#pragma once
#include "Client.h"
#include "date.h"
#include "MAD.h"
#include<iostream>
using namespace std;
class Compte
{
public:
	Compte(Client p, date d, MAD s);
	virtual void deposer(MAD m1);
	virtual void retirer(MAD m2);
	MAD TestRetrait(MAD m3) const;
	MAD& SoldeVal();
	bool transferer(MAD m4, Compte& C1);
	void Consulter() const;
	~Compte();

private:
	int numC;
	static int cpt;
	Client pro;
	date dt;
	MAD	Solde;

};