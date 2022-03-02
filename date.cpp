#include "date.h"
#include <iostream>
using namespace std;


date::date()
{
	this->jour = 0;
	this->mois = 0;
	this->annee = 0;
}

date::date(int jour = 0, int mois = 0, int annee = 0)
{
	this->annee = (annee > 1900) ? annee : 1900;
	this->mois = (mois > 1 && mois < 13) ? mois : 1;
	this->jour = (jour > 0 && jour <= this->maxDays()) ? jour : 1;
}

void date::print() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee ;
}

int date::maxDays() const
{
	int maxjour;
	if (this->mois == 2) {
		if (this->isbis()) {
			maxjour = 29;
		}
		maxjour = 28;
	}
	else if ((this->mois > 7 && this->mois % 2 == 1)
		|| (this->mois < 7 && this->mois % 2 == 0)) {
		maxjour = 30;
	}
	maxjour = 31;
	return maxjour;
}

bool date::isbis() const
{
	return (this->annee % 4 == 0);
}

date& date::operator=(const date& D)
{
	if (this != &D) {
		this->annee = (D.annee > 1900) ? D.annee : 1900;
		this->mois = (D.mois > 1 && D.mois < 13) ? D.mois : 1;
		this->jour = (D.jour > 0 && D.jour <= this->maxDays()) ? D.jour : 1;
	}
	return *this;
}

date::~date()
{
}