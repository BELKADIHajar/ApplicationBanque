#include"Client.h"
#include<iostream>

using namespace std;
int Client::cpt = 0;

Client::Client()
{
	Client::cpt++;
	this->Mat = Client::cpt;
}

Client::Client(string nom, string prenom)
{
	Client::cpt++;
	this->Mat = Client::cpt;
	this->nom = nom;
	this->prenom = prenom;
	//this->list = vector<Compte*>();
}

Client& Client::operator=(const Client& C)
{
	if (this != &C) {
		this->Mat = C.Mat;
		this->nom = C.nom;
		/*this->prenom = C.prenom;
		for (int i = 0; i < this->list.size(); i++)
		{
			this->list[i]=C.list[i]; 
		}*/
	}
	return *this;
}
void Client::print() const
{
	cout << " nom : " << this->nom << endl << " prenom : " << this->prenom << endl << " id : " << this->Mat << endl;
	/*for (int i = 0; i < this->list.size(); i++) {
		this->list[i]->Consulter();
	}*/
	
}
/*
void Client::AddCompte(Compte* C)
{
	this->list.push_back(C);
}*/
Client::~Client()
{
	//this->list.clear();
}