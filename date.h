#pragma once
class date {
public:
	date();
	date(int jour, int mois, int annee);
	void print() const;
	int maxDays() const;
	bool isbis() const;
	date& operator=(const date& D);
	~date();
private:
	int jour;
	int mois;
	int annee;
};