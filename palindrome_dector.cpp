#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    int same = 0;
    int j=0;
  for (int i=text.length()-1; i>=0; i--) {
    if ( text[i] == text[j]) { same++; };
    j++;
  }
  return same;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

  
}