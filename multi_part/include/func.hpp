#include <vector>
template <typename T>

T get_smallest(T num1, T num2) {
    return num1 < num2? num1 : num2;
}

int get_largest( int num1, int num2);


class nombre {
    int uno;
    int duo;
public:
    nombre();
    nombre(int a, int b);
    void set_uno(int n);
    int return_uno();
    std::vector<int> return_all();

};