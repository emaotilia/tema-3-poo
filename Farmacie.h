#pragma once

#include <iostream>
#include <string>

class Farmacie
{
  std::string denumire;
  std::string nume;
  int profit;

  public: 

  Farmacie();
  Farmacie(std::string, std::string, int);
  Farmacie(const Farmacie&);
  ~Farmacie();

  virtual void afisare();

  friend std::istream& operator>>(std::istream& in, Farmacie& ob);
  friend std::ostream& operator<<(std::ostream& out, Farmacie& ob);

  Farmacie& operator = (const Farmacie& ob);
};