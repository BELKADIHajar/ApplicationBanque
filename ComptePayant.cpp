#include "ComptePayant.h"

ComptePayant::ComptePayant(Client pro, date dt, MAD solde)
	:Compte(pro, dt, solde)
{

}

ComptePayant::~ComptePayant()
{

}

void ComptePayant::retirer(MAD m2)
{
	MAD NeM = m2;
	MAD b=m2*0.05;
	NeM+=b;
	this->Compte::retirer(NeM);
}

void ComptePayant::deposer(MAD m1)
{
	MAD NeM = m1;
	MAD a=m1*0.05;
	NeM-= a;
	this->Compte::deposer(NeM);
}
