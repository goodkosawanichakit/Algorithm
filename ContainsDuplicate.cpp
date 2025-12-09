#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  unordered_set<int> set;
  for (int i : nums) {
    if (set.find(i) == set.end())
      set.insert(i);
    else
      return true;
  }
  return false;
}

int main() {
  vector nums = {1, 2, 3, 4, 3};
  cout << containsDuplicate(nums) << '\n';
  return 0;
}
