#include "func.hpp"

bool isPrime(int number)
{
  if (number < 2) {
    return false;
  }
  for (int divisor = 2; divisor * divisor <= number; ++divisor) {
    if (number % divisor == 0) {
      return false;
    }
  }
  return true;
}
