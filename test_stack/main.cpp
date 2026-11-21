#include <cstdint>
#include <iostream>

int main()
{
  int x = 10;
  int y = 20;

  std::cout << "x = " << x << ", address: " << &x << std::endl;
  std::cout << "y = " << y << ", address: " << &y << std::endl;

  std::uintptr_t xAddress = reinterpret_cast<std::uintptr_t>(&x);
  std::uintptr_t yAddress = reinterpret_cast<std::uintptr_t>(&y);
  std::uintptr_t difference =
      xAddress > yAddress ? xAddress - yAddress : yAddress - xAddress;

  std::cout << "sizeof(int) = " << sizeof(int) << " bytes" << std::endl;
  std::cout << "Difference between addresses = " << difference << " bytes"
            << std::endl;

  // Разница больше 4, потому что компилятор выравнивает локальные переменные
  // и в отладочной сборке добавляет защитные байты между ними для проверки
  // переполнения. Порядок и расстояние не гарантированы: они зависят от
  // компилятора и настроек сборки.

  return 0;
}
