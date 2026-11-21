#include <chrono>
#include <iostream>
#include <thread>

int main()
{
  int *p = new int;
  delete p;

  int n = 5;
  int *arr = new int[n];
  delete[] arr;

  /*while (true) {
    int* p = new int[100'000'000];
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    delete[] p;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }*/

  int x = 1000;

  int *px = &x; //
  std::cout << *px << std::endl;

  // char* pc = (char*)px; // c-style
  //  static_cast - простые типы
  //  reinterpret_cast - указатели
  uint8_t *pc = reinterpret_cast<uint8_t *>(px);
  std::cout << static_cast<int>(*pc) << std::endl;
  std::cout << static_cast<int>(*(pc + 1)) << std::endl;
  std::cout << static_cast<int>(*(pc + 2)) << std::endl;
  std::cout << static_cast<int>(*(pc + 3)) << std::endl;
  return 0;
}
