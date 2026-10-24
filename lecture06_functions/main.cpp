#include <iostream>

constexpr int NMax = 20'000;

// тип возвращаемого значения, имя
void Read(int array[NMax], int &n)
{
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> array[i];
  }
}

void Write(int array[NMax], int n)
{
  for (int i = 0; i < n; ++i) {
    std::cout << array[i] << " ";
  }
}

bool doesContainDigit(int n, int digit)
{
  while (n > 0) {
    if (n % 10 == digit) {
      return true;
    }
    n /= 10;
  }
  return false;
}

void DeleteElements(int array[NMax], int &n)
{
  int j = 0;
  int i = 0;
  while (i < n) {
    if (doesContainDigit(array[i], 7) && !doesContainDigit(array[i], 6)) {
      ++i;
    } else {
      array[j] = array[i];
      ++i;
      ++j;
    }
  }
  n = j;
}

bool isPrime(int x)
{
  if (x <= 1) {
    return false;
  }
  for (int d = 2; d <= sqrt(x); ++d) {
    if (x % d == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
  int array[NMax];
  int n;

  for (int i = 1; i < 100; ++i) {
    std::cout << i << " " << isPrime(i) << std::endl;
  }

  // имя, список аргументов
  Read(array, n);
  DeleteElements(array, n);

  Write(array, n);
}
