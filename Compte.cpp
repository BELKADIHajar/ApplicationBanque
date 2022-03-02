#include "Compte.h"
#include <cassert>
int Compte::cpt = 0;
Compte::Compte(Client p, date d, MAD s)
{
	Compte::cpt++;
	this->numC = Compte::cpt;
	this->dt = d;
	this->pro = p;
	this->Solde = s;
}

void Compte::deposer(MAD m1)
{
	this->Solde += m1;
}

void Compte::retirer(MAD m2)
{
	if (this->Solde >= m2) {
		this->Solde -= m2;
	}
}

MAD Compte::TestRetrait(MAD m3) const
{
	MAD res = this->Solde;
	res -= m3;
	return res;

}

MAD& Compte::SoldeVal()
{
	return  this->Solde;
}

bool Compte::transferer(MAD m4, Compte& C1)
{
	if (this->Solde >= m4) {
		this->Solde -= m4;
		C1.Solde += m4;
		return true;
	}
	return false;
}

void Compte::Consulter() const
{
	this->dt.print();
	cout << "| N " << this->numC<< " ||";
	this->Solde.afficher();
	cout<<" MAD" << endl;
}

Compte::~Compte()
{

}