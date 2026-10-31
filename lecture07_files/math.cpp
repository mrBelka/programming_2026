#include "math.hpp"

namespace mathUtils {
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

bool doesContainDigit(int number, int digit)
{
  while (number > 0) {
    if (number % 10 == digit) {
      return true;
    }
    number /= 10;
  }
  return false;
}
} // namespace mathUtils
