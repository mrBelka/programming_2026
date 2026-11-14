#include <iostream>

int main()
{
  int x = 10;
  int y = 20;
  //std::cout << &x << std::endl; // взятие адреса
  int* px = &x;
  int* py = &y;
  std::cout << px << std::endl;
  std::cout << py << std::endl;
  std::cout << *px << std::endl; // разыменование
  std::cout << &px << std::endl;

  int arr[10] = {1,2,3,4,5};
  std::cout << arr << " " << *(arr+0) << std::endl;
  std::cout << arr + 1 << " " << *(arr+1) << std::endl;

  int* pz = new int; //
  std::cout << &pz << std::endl; 
  std::cout << pz << std::endl;
  *pz = 10;

  delete pz;
  return 0;
}
