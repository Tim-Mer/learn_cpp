#include <iostream>
#include "func.hpp"
#include <vector>
using namespace std;

int main() {
  std::cout << "Small: " << get_smallest(2, 7) << std::endl;
  std::cout << "Small: " << get_smallest(2.5, 7.0) << std::endl;
  std::cout << "Small: " << get_smallest(2/2, 7*5) << std::endl;
  std::cout << "Large: " << get_largest(2, 7) << std::endl;
  //std::cout << "Large: " << get_largest(2.5, 7.4) << std::endl;

  vector<*int> ptrtmp;

  vector<int> tmp1, tmp2, tmp3;

  for (int i=0; i<10; i++) {
    tmp.push_back(i*i);
  }


      cout << "Output of begin and end: "; 
    for (auto i = tmp.begin(); i != tmp.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = tmp.cbegin(); i != tmp.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = tmp.rbegin(); ir != tmp.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = tmp.crbegin(); ir != tmp.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
}