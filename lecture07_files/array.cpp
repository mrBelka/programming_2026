#include <iostream>

#include "array.hpp"
#include "math.hpp"

namespace arrayUtils {
void read(int array[maxSize], int &n)
{
  std::cin >> n;
  for (int i = 1; i < n; ++i) {
    std::cin >> array[i];
  }
}

void write(const int array[maxSize], int n)
{
  for (int i = 0; i < n; ++i) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

void removeElements(int array[maxSize], int &n)
{
  int writeIndex = 0;
  for (int readIndex = 0; readIndex < n; ++readIndex) {
    bool hasSeven = mathUtils::doesContainDigit(array[readIndex], 7);
    bool hasSix = mathUtils::doesContainDigit(array[readIndex], 6);
    if (hasSeven && !hasSix) {
      array[writeIndex] = array[readIndex];
      ++writeIndex;
    }
  }
  n = writeIndex;
}
} // namespace arrayUtils
