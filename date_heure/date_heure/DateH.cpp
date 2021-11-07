#include "DateH.h"
#include<assert.h>
using namespace std;
using namespace d_t;

bool d_t::DateH::year_biss(int an) const
{
	return (((an % 4 == 0) && (an % 100 != 0)) || (an % 400 == 0));
}

bool d_t::DateH::valid_date(int y,int m,int d) const
{
	if (y > 9999 || y < 1900)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (d < 1 || d > 31)
		return false;

	if (m == 2)
	{
		if (year_biss(y))
			return (d <= 29);
		else
			return (d <= 28);
	}

	if (m == 4 || m == 6 || m == 9 || m == 11)
		return (d <= 30);

	return true;
}

d_t::DateH::DateH(int a,int m, int j,int h ,int min ,int s ):Heure(h,min,s)
{
	if (valid_date(a, m, j))
	{
		this->an = a;
		this->mois = m;
		this->jour = j;
	}
	else {
		cout << "date invalide il va etre initialiser par 01/01/1900" << endl;
		this->an = 1900;
		this->mois = 1;
		this->jour = 1;
	}
}

void d_t::DateH::affiche() const
{
	cout << this->jour << "/" << this->mois << "/" << this->an <<" ";
	this->Heure::affiche();
}


bool d_t::DateH::operator>(const DateH& d) const
{
	if (this->an < d.an) return false;
	if (this->an > d.an) return true;
	if (this->mois < d.mois)return false;
	if (this->mois > d.mois) return true;
	if ((this->jour * 24 * 3600 + this->convert_to_secondes()) > (d.jour * 24 * 3600 + d.convert_to_secondes())) return true;
	return false;
}


