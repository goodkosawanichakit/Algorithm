#include <iostream>

using namespace std;

long long sum(long long n);

int main() {
  long long n;
  cout << "input: ";
  cin >> n;
  cout << "output: " << sum(n) << '\n';
  return 0;
}

long long sum(long long n) { return (n * n + n) / 2; }
