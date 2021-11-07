#pragma once
#include "Heure.h"
namespace d_t {
	class DateH : public Heure
	{
	private:
		int an,mois,jour;
	public:
		bool year_biss(int an) const;
		bool valid_date(int a,int m, int j) const;
		DateH(int ann,int mois,int jour,int h=0,int min=0,int s=0);
		void affiche() const;
		bool operator>(const DateH& d)const;
	};
}
