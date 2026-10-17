#include <iostream>

// Даны натуральные числа a1..an (n <= 10000).
// Если среди них есть два одинаковых числа,
// упорядочить последовательность по невозрастанию последней цифры.

int main()
{
  const int NMax = 10000;
  int n;
  std::cin >> n;

  if (n < 1 || n > NMax) {
    std::cerr << "Not valid number of elements" << std::endl;
    return 1;
  }

  int a[NMax];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  // Ищем, есть ли два одинаковых числа.
  bool is_equal_nums = false; // флаг
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] == a[j]) {
        is_equal_nums = true;
        break;
      }
    }
    if (is_equal_nums) {
      break;
    }
  }

  // Сортируем пузырьком по последней цифре (сначала большие цифры).
  if (is_equal_nums) {
    for (int i = 0; i < n - 1; ++i) {
      for (int j = i + 1; j < n; ++j) {
        int ith_last = a[i] % 10;
        int jth_last = a[j] % 10;
        if (ith_last < jth_last) {
          int tmp = a[i];
          a[i] = a[j];
          a[j] = tmp;
        }
      }
    }
  }

  for (int i = 0; i < n; i = i + 1) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
