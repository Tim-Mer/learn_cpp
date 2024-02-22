#include <iostream>
#include "func.hpp"

int main() {
    /*std::cout << "Small: " << get_smallest(2, 7) << std::endl;
    std::cout << "Small: " << get_smallest(2.5, 7.0) << std::endl;
    std::cout << "Small: " << get_smallest(2/2, 7*5) << std::endl;
    std::cout << "Large: " << get_largest(2, 7) << std::endl;
    //std::cout << "Large: " << get_largest(2.5, 7.4) << std::endl; // Won't work cause isn't templated/overloaded
    */
    
    std::vector<nombre> list_n(2);
    nombre a;
    nombre b(5,10);
    list_n.push_back(a);
    list_n.push_back(b);

    for( int i=0; i<list_n.size(); i++) {
        list_n[i].set_uno(list_n[i].return_uno() + 1);
        std::cout << list_n[i].return_uno() << std::endl;
        std::cout << "i = " << i << std::endl;
    }

}