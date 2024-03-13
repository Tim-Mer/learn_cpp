#include <iostream>
#include <vector>
#include "func.hpp"

int main() {
  Solution test;
  vector<string> vs = {"abcabcaab", "bbbbb", "pwwkew", "aab", "dvdf"};
  for (int i=0; i<vs.size(); i++) {
    std::cout << "Length of substring: " << test.lengthOfLongestSubstring(vs[i]) << endl;
  }
}