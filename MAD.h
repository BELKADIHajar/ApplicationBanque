#pragma once
#include <io.h>
using namespace std;
class MAD
{
public:
	MAD(double valeur = 0);
	~MAD();
	MAD& operator=(const MAD& M);
	MAD& operator-=(const MAD& M);
	MAD& operator+=(const MAD& M);
	MAD& operator*(const MAD& M);
	MAD& operator/(const MAD& M);
	bool operator>=(const MAD& M);

	void afficher() const;
private:
	double valeur;
};

