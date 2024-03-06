#include "func.hpp"

int get_largest( int num1, int num2) {
    return num1 > num2? num1 : num2;
}

nombre::nombre() {
    uno=0;
    duo=0;
}

nombre::nombre (int a, int b) {
    uno=a;
    duo=b;
}

void nombre::set_uno(int n) {
    uno=n;
}

int nombre::return_uno() {
    return uno;
}

std::vector<int> nombre::return_all() {
    return {uno, duo};
}