#include "Heure.h"
#include<assert.h>
using namespace d_t;
Heure::Heure(int h, int m, int s)
{
    if ((h>0 && h < 24) &&(m>0 && m < 60) &&(s>0 && s < 60))
    {
        this->heure = h;
        this->minute = m;
        this->seconde = s;
    }
    else
    {
        this->heure = 0;
        this->minute = 0;
        this->seconde = 0;
    }
}

void Heure::affiche() const
{
    cout << this->heure << ":" << this->minute << ":" << this->seconde << endl;
}

int d_t::Heure::convert_to_secondes() const
{
    return (this->heure * 3600 + this->minute * 60 + this->seconde);
}

bool Heure::operator>(const Heure& h)const
{
    if (this->convert_to_secondes() > h.convert_to_secondes()) return true;
    return false;
}
