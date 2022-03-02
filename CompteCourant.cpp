#include "CompteCourant.h"
#include <cassert>

CompteCourant::CompteCourant(Client pro, date dt, MAD solde, MAD decouvert)
	:Compte(pro, dt, solde)
{
	this->decouvert = decouvert;
}

void CompteCourant::retirer(MAD montant)
{
	if (TestRetrait(montant) >= this->decouvert) {
		this->Compte::retirer(montant);
	}
}

CompteCourant::~CompteCourant()
{
}
