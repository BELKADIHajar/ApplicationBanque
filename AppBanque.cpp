#include"AppBanque.h"

AppBanque::AppBanque()
{
	this->BaseDonnee = vector<Client*>();
}
void AppBanque::AddClient(Client* C)
{
	this->BaseDonnee.push_back(C);
}

void AppBanque::print() const
{
	
		for (int i = 0; i < this->BaseDonnee.size(); i++)
		{
			this->BaseDonnee[i]->Client::print();
		}
}
AppBanque::~AppBanque()
{
	this->BaseDonnee.clear();
}
