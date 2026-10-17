#include <algorithm>
#include <iostream>

int main()
{
  std::cout << "INFO msg";
  std::cerr << "ERROR msg";

  return 0;
  /*// Массив - это набор переменных одного типа
  int array[100] = {0}; // 0..9
  // int array[100] = {1,2,3,4,5};

  // Есть последовательность из не более 100 натуральных чисел
  // найти максимальное число

  int n = 0;
  std::cin >> n;

  if (n < 1) {
    std::cerr << "Not valid number of elements" << std::endl;
    return -1;
  }

  for (int i = 0; i < n; ++i) {
    std::cin >> array[i];
  }

  int max = array[0]; //
  for (int i = 1; i < n; ++i) {
    if(array[i] > max) {
      max = array[i];
    }
  }

  std::cout << max << std::endl;


  // Сортировка
  // Последовательность -> отсортированная по ключу последовательность
  // Сортировка обменом - Swap sort

  for (int i = 0; i < n-1; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (array[i] < array[j]) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        // std::swap(array[i], array[j]);
      }
    }
  }


  // Дана последовательность натуральных чисел {aj}j=1...n (n<=10000).
  // Если в последовательности есть два одинаковых числа,
  // упорядочить последовательность по невозрастанию
  // последней цифры числа.

  // Этап 1 Ввод последовательности
  int n = 0;
  std::cin >> n;
  unsigned int seq[10'000] = {0};
  for (int i=0;i<n;++i) {
    std::cin >> seq[i];
  }


  // Этап N Вывод послевательности
  for (int i=0;i<n;++i) {
    std::cout << seq[i] << " ";
  }*/
}
