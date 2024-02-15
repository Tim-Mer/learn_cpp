#include <iostream>

using namespace std;

int get_user_year() {
    int yin;
    cout << "Input year: ";
    cin >> yin;
    return yin;
}

bool check_is_year(int year){
    int count = 0;
    while (year != 0) {
        year = year / 10;
        count++;
    }
    if (count == 4){
        return 1;
    }
    return 0;
}
bool check_is_leap(int year){
    if ( !(year % 4) || !(year % 400)){
        return 1;
    }
    return 0;
}

int main() {
    cout << "Checks if leap year\n";

    int yin = get_user_year();
    if (check_is_year(yin)) {
        if (check_is_leap(yin)) {
            cout << "The year " << yin << " is a leap year\n";
        } else {
            cout << "The year " << yin << " is not a leap year\n";
        }
    } else {
        cout << "Please enter a 4 digit year such as 2024!\n";
    }
}