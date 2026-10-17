#include <iostream>

#include "func.hpp"

int main()
{
  int number = 0;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (isPrime(number)) {
    std::cout << number << " is prime" << std::endl;
  } else {
    std::cout << number << " is not prime" << std::endl;
  }

  return 0;
}
