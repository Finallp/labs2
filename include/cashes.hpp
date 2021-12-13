// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_CASHES_HPP_
#define INCLUDE_CASHES_HPP_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <ctime>

const std::vector <size_t> cache_size { 512 * 1024,           // L1
                                        4 * 1024 * 1024,      // L2
                                        32 * 1024 * 1024 };   // L3

const size_t iterations = 1000;

class cash_test
{
 private:
  std::string _travel_variant;
  std::vector <size_t> _buffer_size;      // объём буфера
  std::vector <double> _duration;         // время прохода
 public:
  explicit cash_test(std::string travel_variant = "");
  ~cash_test();
  void straight();
  void reverse();
  void random();
  void output(std::ostream& os);
};

#endif // INCLUDE_CASHES_HPP_
