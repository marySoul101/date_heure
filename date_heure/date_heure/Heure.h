#pragma once
#include<iostream>
using namespace std;
namespace d_t {
	class Heure
	{
	protected:
		int heure, minute, seconde;
	public:
		Heure(int h = 0, int m = 0, int s = 0);
		void affiche() const;
		int convert_to_secondes() const;
		bool operator>(const Heure& h)const;

	};
}
