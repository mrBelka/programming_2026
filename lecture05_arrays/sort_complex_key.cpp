#include <iostream>

// Ввести последовательность натуральных чисел a1..an (n <= 1000).
// Упорядочить по неубыванию первой цифры числа,
// при равных первых цифрах - по неубыванию произведения цифр,
// при равных первых цифрах и произведениях - по неубыванию самого числа.

int main()
{
  int n;
  std::cin >> n;

  if (n < 1 || n > 1000) {
    std::cerr << "Not valid number of elements" << std::endl;
    return 1;
  }

  int a[1000];
  for (int i = 0; i < n; i = i + 1) {
    std::cin >> a[i];
  }

  // Сортировка обменами (пузырьком) со сложным ключом.
  for (int i = 0; i < n - 1; i = i + 1) {
    for (int j = 0; j < n - 1 - i; j = j + 1) {
      int x = a[j];
      int y = a[j + 1];

      // Первая цифра числа x.
      int fx = x;
      while (fx >= 10) {
        fx = fx / 10;
      }

      // Первая цифра числа y.
      int fy = y;
      while (fy >= 10) {
        fy = fy / 10;
      }

      // Произведение цифр числа x.
      int px = 1;
      int tmp = x;
      while (tmp > 0) {
        px = px * (tmp % 10);
        tmp = tmp / 10;
      }

      // Произведение цифр числа y.
      int py = 1;
      int tmp2 = y;
      while (tmp2 > 0) {
        py = py * (tmp2 % 10);
        tmp2 = tmp2 / 10;
      }

      // Нужно ли менять местами.
      bool change = false;
      if (fx > fy) {
        change = true;
      } else if (fx == fy) {
        if (px > py) {
          change = true;
        } else if (px == py) {
          if (x > y) {
            change = true;
          }
        }
      }

      if (change) {
        int p = a[j];
        a[j] = a[j + 1];
        a[j + 1] = p;
      }
    }
  }

  for (int i = 0; i < n; i = i + 1) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
