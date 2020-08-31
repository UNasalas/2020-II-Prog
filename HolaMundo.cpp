#include <iostream>
#include <string>

int main() {
  std::string name;
  std::string age;

  std::cout << "Enter your name:\n";
  std::getline(std::cin, name);
  std::cout << "Enter your age:\n";
  std::getline(std::cin, age);

  std::cout << "Hello " << name << "! You are " << age << " years old.\n";

  return 0;
}