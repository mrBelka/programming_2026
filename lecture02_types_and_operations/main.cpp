#include <iomanip>
#include <iostream>

int main()
{
  int sumOfDigits;
  int SumOfDigits;
  int sum_of_digits;

  // int y; // declaration - объявление
  // int x = 0; // definition - определение
  // int x; // redeclaration
  // x = 10;
  /*
  111
  222
  */
  // std::cout << x << std::endl;

  // int
  int z = 0;
  unsigned int z1 = 0;
  std::cout << z << sizeof(z) << std::endl;

  // long long
  // 8 байт
  // -2^63 .. 2^63-1

  // short - 2 байт

  // char - 1 байт -128..127

  size_t size = 0;
  uint8_t x1 = 0;
  uint16_t x2 = 0;
  int32_t x3 = 0;
  uint32_t x4 = 0;

  // вещественные
  // float - 4б 6-7 значащих цифр
  // double - 8б - 15-16 цифр
  // long double - 16б
  double d1 = 0.0;
  double d2 = 1.0;

  float f1 = 1.3456778f; // литеральный суффикс
  std::cout << std::setprecision(7) << f1 << std::endl;

  // логический тип
  // bool
  // false, true
  // 1 байт

  // char
  // 1 байт
  // -128..127
  char a = 'a';
  std::cout << (int)a << std::endl;

  return 0;
}
