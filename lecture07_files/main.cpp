#include <iostream>

#include "array.hpp"
#include "math.hpp"

unsigned int mystrlen(const char *s)
{
  const char *tmp = s;
  unsigned int result = 0;
  while (*tmp != '\0') {
    ++result;
    ++tmp;
  }
  return result;
}

unsigned int ConsonantCount(const char *s)
{
  unsigned int result = 0;
  const char *consonants = "bcdf";
  for (int i = 0; i < mystrlen(s); ++i) {
    for (int j = 0; j < mystrlen(consonants); ++j) {
      if (s[i] == consonants[j]) {
        ++result;
        break;
      }
    }
  }
  return result;
}

int main()
{
  /*int* a;
  int* b;


  char c = 'a';     // стек
                    // 0x0042742769
  char *pc = &c;    // pointer c - стек
  char new_c = *pc; // dereferencing - разыменование
  *pc = 'b';
  // pc++;

  size_t tmp;
  //std::string s = "Hello, world";
  //if (s.find('z') != std::string::npos) {
 // }

  // const char* const s = "abc"; // static memory
  //  const char* - указатель на константу
  //  *s = "123";
  //
  //  ++s;
  // std::cout << *(s+1) << std::endl; // s[0]

  const char *s = "abcde";
  std::cout << ConsonantCount(s) << std::endl;

  return 0;*/

  int array[arrayUtils::maxSize];
  int n = 0;

  arrayUtils::read(array, n);
  arrayUtils::removeElements(array, n);
  arrayUtils::write(array, n);

  int number = 0;
  std::cout << "Enter a number: ";
  std::cin >> number;
  std::cout << number << " is prime: " << mathUtils::isPrime(number)
            << std::endl;

  return 0;
}
