#include <iomanip>
#include <iostream>
#include <limits>

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

  /*// int
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

  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(a) << std::endl;

  std::cout << pow(2, 32) << std::endl;

  int32_t x = 0;

  std::cout << std::numeric_limits<int32_t>::min() << std::endl;
  std::cout << std::numeric_limits<int>::max() << std::endl;
  // 1.175494e-38 = 1.175494*10^(-38)
  // 3.402823e+38
  // -3.402823e+38
  std::cout << std::numeric_limits<float>::max() << std::endl;

  auto p = 10ull;
  //auto x = (1ull << 63); // << 1*2^63


  // Арифметические
  // *, /, +, -, %
  5/2; // целочисленное = 2
  5.0/2; // вещественное = 2.5
  5/2.0;
  5./2.;

  int a = 5;
  int b = 2;
  float c = (a * 1.0) / b;

  a + c;

  double d = 2.5;
  int d2 = d;
  //int f = 3.141592 * 10^9  716;
  //float f2 = f;

  int c = b % a;

  (a + b) % 2;

  // инкремент и декремент
  // префиксный и постфиксный
  int i = 1;
  int x = ++i; // x = 2, i = 2
  int y = i++; // y = 2, i = 3
  --i;
  i--;

  i = i + 1;
  i += 1;

  // Операторы сравнения
  a = 2;
  b = 5;
  bool b1 = (a == b); // целые числа
  bool b3 = (0 == b);

  //
  const double EPS = 1e-9; // 1*10^-9
  //double d1 = 1.234578;
  //double d2 = 2.342526;
  //bool b2 = (abs(d1 - d2) < EPS);

  // <, >, !=, <=, >=, ==

  // Логические операторы

  bool isEven = (a % 2 == 0);
  bool isDivisibleBy5 = (a % 5 == 0);

  bool result = isEven && isDivisibleBy5;

  // &&, ||, !
*/
  int z = 10;
  bool b1 = (z % 2 == 0) || ++z; // short circuit evaluation
  (z & 1);
  // true | 10
  // 1011
  // 0001
  // 1011
  std::cout << z << std::endl;

  // a == b;

  // Битовые операции
  // &
  // 3 (10) == 11 (2)
  // 101 = a
  // 001 = b
  // 001

  // |
  // 101 = a
  // 001 = b
  // 101

  // ~ инверсия
  // 0110 -> ~   1001
  int a = 10; // 00..001010 (2)
  //~a; // 11..110101

  // 11..110101
  // 00..001010 + 1
  // 00..001011 = -11
  // 10..001011 = -11
  std::cout << ~a << std::endl;
  //(~a) & 0b1111;

  // XOR ^
  // 0101 = a
  // 1100 = b
  // 1001

  // <<, >>

  // 8 lamps

  char state = 0;
  state = state | (1 << 8);
  state = state & ~(1 << 8); // 1 * 2^8

  return 0;
}
