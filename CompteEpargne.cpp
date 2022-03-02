#include "CompteEpargne.h"

CompteEpargne::CompteEpargne(Client pro, date dt, MAD solde, double TauxInteret)
	:Compte(pro, dt, solde)
{
	if (TauxInteret >= 0 && TauxInteret <= 100) {
		this->TauxInteret = TauxInteret;
	}
}

void CompteEpargne::calculInteret()
{
	MAD res1 = this->SoldeVal();
	this->SoldeVal() -= (res1 * this->TauxInteret)/100;
}

CompteEpargne::~CompteEpargne()
{

}