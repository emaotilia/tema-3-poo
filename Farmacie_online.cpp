#include "Farmacie_online.h"

Farmacie_online::Farmacie_online()
{
  adresa="";
  visit=0;
  discount=0;
}

Farmacie_online :: Farmacie_online (std::string adresa, int visit, int discount)
{
  this->adresa=adresa;
  this->visit=visit;
  this->discount=discount;
}

Farmacie_online::Farmacie_online(const Farmacie_online& ob)
{
  this->adresa=ob.adresa;
  this->visit=ob.visit;
  this->discount=ob.discount;
}

Farmacie_online::~Farmacie_online()
{
  adresa="";
  visit=0;
  discount=0;
}

std::istream& operator>>(std::istream& in, Farmacie_online& ob) 
{
    in>>ob.adresa>>ob.visit>>ob.discount;
    return in;
}

void Farmacie_online::afisare()
{

}

std::ostream& operator<<(std::ostream& out, Farmacie_online& ob)
{
    out<<ob.adresa<<ob.visit<<ob.discount;
    ob.afisare();
    return out;
}

Farmacie_online& Farmacie_online :: operator = (const Farmacie_online& ob)
{
  if(this==&ob)
    return *this;
  this->adresa=ob.adresa;
  this->visit=ob.visit;
  this->discount=ob.discount;
}