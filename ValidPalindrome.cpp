#include <cctype>
#include <iostream>

using namespace std;

bool isPalindrome(string s) {
  int h, t;
  h = 0;
  t = s.length() - 1;

  while (h < t) {
    while (h < t && !isalnum(s[h]))
      h++;
    while (h < t && !isalnum(s[t]))
      t--;
    if (tolower(s[h]) != tolower(s[t]))
      return false;
    else {
      h++;
      t--;
    }
  }
  return true;
}

int main() { cout << isPalindrome("A man, a plan, a canal: Panama"); }
