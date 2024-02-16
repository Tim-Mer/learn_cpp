#include <iostream>
#include "func.hpp"

int main() {
  std::cout << "Small: " << get_smallest(2, 7) << std::endl;
  std::cout << "Small: " << get_smallest(2.5, 7.0) << std::endl;
  std::cout << "Small: " << get_smallest(2/2, 7*5) << std::endl;
  std::cout << "Large: " << get_largest(2, 7) << std::endl;
  //std::cout << "Large: " << get_largest(2.5, 7.4) << std::endl; // Won't work cause isn't templated/overloaded
}