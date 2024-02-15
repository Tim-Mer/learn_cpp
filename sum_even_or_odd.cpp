#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> nums = {2, 4, 3, 6, 1, 9};
    int sume=0, sumo=0;
    for (int i=0; i<nums.size(); i++) {
        if (nums[i]%2) {
            sumo+=nums[i];
        } else {
            sume+=nums[i];
        }
    }
    cout << "Sum even: " << sume << "\nSum odd: " << sumo << endl;
}