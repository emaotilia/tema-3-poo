#include "Farmacie.h"

Farmacie::Farmacie()
{
  denumire="";
  nume="";
  profit=0;
}

Farmacie :: Farmacie (std::string denumire, std::string nume, int profit)
{
  this->denumire=denumire;
  this->nume=nume;
  this->profit=profit;
}

Farmacie::Farmacie(const Farmacie& ob)
{
  this->denumire=ob.denumire;
  this->nume=ob.nume;
  this->profit=ob.profit;
}

Farmacie::~Farmacie()
{
  denumire="";
  nume="";
  profit=0;
}

void Farmacie::afisare() {

}

std::istream& operator>>(std::istream& in, Farmacie& ob) 
{
    in>>ob.denumire>>ob.nume>>ob.profit;
    return in;
}

std::ostream& operator<<(std::ostream& out, Farmacie& ob)
{
    out<<ob.denumire<<ob.nume<<ob.profit;
    ob.afisare();
    return out;
}

Farmacie& Farmacie :: operator = (const Farmacie& ob)
{
  if(this==&ob)
    return *this;
  this->denumire=ob.denumire;
  this->nume=ob.nume;
  this->profit=ob.profit;
}