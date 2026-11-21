#include <iostream>
#include <vector>

int globalValues[3] = {1, 2, 3};

int getValue(int index)
{
  int values[3] = {1, 2, 3};
  return values[index];
}

void createLeak()
{
  int *values = new int[100];
  values[0] = 42;
  std::cout << "Leak created: MSVC ASan does not report leaks" << std::endl;
}

void overflowHeap()
{
  int *values = new int[3]{1, 2, 3};
  std::cout << values[3] << std::endl;
  delete[] values;
}

void useAfterFree()
{
  int *value = new int(42);
  delete value;
  std::cout << *value << std::endl;
}

void freeTwice()
{
  int *value = new int(42);
  delete value;
  delete value;
}

void overflowGlobal() { std::cout << globalValues[3] << std::endl; }

void overflowContainer()
{
  std::vector<int> values(3);
  values.reserve(6);
  int *data = values.data();
  data[3] = 42;
  std::cout << data[3] << std::endl;
}

int main()
{
  std::cout << "Examples: 1 - stack overflow, 2 - leak, 3 - heap overflow, "
               "4 - use after free, 5 - double free, 6 - global overflow, "
               "7 - container overflow\n";
  std::cout << "Choose example: ";

  int example = 0;
  std::cin >> example;

  if (!std::cin) {
    return 1;
  }

  switch (example) {
  case 1: {
    std::cout << "Enter an index (0..2, or 3 to trigger ASan): ";
    int index = 0;
    std::cin >> index;

    if (!std::cin) {
      return 1;
    }

    std::cout << "Value: " << getValue(index) << std::endl;
    break;
  }
  case 2:
    createLeak();
    break;
  case 3:
    overflowHeap();
    break;
  case 4:
    useAfterFree();
    break;
  case 5:
    freeTwice();
    break;
  case 6:
    overflowGlobal();
    break;
  case 7:
    overflowContainer();
    break;
  default:
    return 1;
  }

  return 0;
}
