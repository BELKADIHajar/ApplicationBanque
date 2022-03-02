#include "MAD.h"
#include <iostream>
MAD::MAD(double valeur)
{
	this->valeur = valeur;
}
MAD::~MAD()
{
}

MAD& MAD::operator=(const MAD& M)
{
	if (this != &M) {
		this->valeur = M.valeur;
	}
	return *this;
}

MAD& MAD::operator-=(const MAD& M)
{
	this->valeur -= M.valeur;

	return *this;
}

MAD& MAD::operator+=(const MAD& M)
{
	this->valeur += M.valeur;
	return *this;
}

MAD& MAD::operator*(const MAD& M)
{
	this->valeur *= M.valeur;
	return *this;
}

MAD& MAD::operator/(const MAD& M)
{
	this->valeur = this->valeur/M.valeur;
	return *this;
}


bool MAD::operator>=(const MAD& M)
{
	if (this->valeur >= M.valeur) {
		return true;
	}
	return false;
}

void MAD::afficher() const
{
	cout << this->valeur ;
}