#pragma once
#include"Client.h"

class AppBanque {
public:
	AppBanque();
	void AddClient(Client* C);
	void print() const;
	~AppBanque();
private:
	vector <Client*> BaseDonnee;

};
