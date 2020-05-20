#pragma once 

#include <iostream>
#include <string>
#include "Farmacie.h"

class Farmacie_online : public Farmacie
{
  
  std::string adresa;
  int visit;
  int discount;

public:

  Farmacie_online();
  Farmacie_online(std::string, int, int);
  Farmacie_online(const Farmacie_online&);
  ~Farmacie_online();

  void afisare ();

  friend std::istream& operator>>(std::istream& in, Farmacie_online& ob);
  friend std::ostream& operator<<(std::ostream& out, Farmacie_online& ob);

  Farmacie_online& operator = (const Farmacie_online& ob);


};