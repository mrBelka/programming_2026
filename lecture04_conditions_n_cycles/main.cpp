#include <algorithm>
#include <iostream>

int main()
{
  // 1. if, if..else
  int a = 5;
  int x = 10;
  if (x % 2 == 0) {
    if (a > 0) {
      std::cout << "Even" << std::endl;
      x += 2;
    }
  } else if (x > 0) {
    std::cout << "Odd" << std::endl;
  } else {
    //...
  }

  // switch
  int error_code = 0;
  if (error_code == 0) {
    std::cout << "Success" << std::endl;
  } else if (error_code == -1) {
    std::cout << "File not found" << std::endl;
  } else if (error_code == -2) {
    std::cout << "File not found" << std::endl;
  }

  switch (error_code) {
  case 2:
  case 1:
  case 0:
    std::cout << "Success" << std::endl;
    break;
  case -1:
    std::cout << "File not found" << std::endl;
    break;
  case -2:
    std::cout << "File not found" << std::endl;
    break;
  default:
    std::cout << "Unknown code" << std::endl;
  }

  // Тернарный оператор
  if (x % 2 == 0) {
    std::cout << "Even" << std::endl;
  } else {
    std::cout << "Odd" << std::endl;
  }

  bool isEven = (x % 2 == 0) && (a > 0) && (a % 5 == 0);
  std::cout << (isEven ? "Even" : "Odd") << std::endl;

  // Cycles
  std::cout << 1 << std::endl;
  std::cout << 2 << std::endl;
  // ...
  std::cout << 10 << std::endl;

  // While
  int i = 1;        // Переменная-счетчик (итератор)
  while (i <= 10) { // Условие
    // Тело цикла
    std::cout << i << std::endl;
    ++i;
  }

  // For
  for (int i = 1; i <= 10; ++i) {
    std::cout << i << std::endl;
  }

  // do..while
  do {
    // тело цикла
  } while (i <= 10);

  // Распаковка натурального числа
  int y = 1123;
  int sum = 0;
  int max_digit = 0;
  while (y > 0) {
    int digit = y % 10; // 3 | 2 | 1
    sum += digit;
    max_digit = std::max(max_digit, digit);
    y /= 10; // 12 | 1 | 0
  }
  //

  // Наиболее встречающаяся цифра числа
  int digit_max = 0;
  int digit_name = 0;
  for (int j = 0; j < 10; ++j) {
    int digit_cnt = 0;
    int tmp_y = y;
    while (tmp_y > 0) {
      int digit = tmp_y % 10;
      if (digit == j) {
        ++digit_cnt;
      }
      tmp_y /= 10;
    }
    if (digit_max < digit_cnt) {
      digit_max = digit_cnt;
      digit_name = j;
    }
  }
}
