#pragma once

#include <exception>

class Exceptie : public std::exception { 
  const char* what_arg;
public:
  Exceptie(const char* what_arg = "") {
    this->what_arg = what_arg;
  }

  const char* what() const noexcept {
    return what_arg;
  } 
};