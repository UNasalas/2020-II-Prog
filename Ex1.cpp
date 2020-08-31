#include <iostream>

int main() {
  int d;

  std::cout << "Distance in furlongs: ";
  std::cin >> d;
  std::cout << "Distance in yards: " << d*220 << std::endl;

  return 0;
}