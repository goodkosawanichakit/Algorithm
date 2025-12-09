#include <iostream>
#include <vector>

vector<int> twoSum(vector<int> &numbers, int target) {
  int l = 0;
  int r = numbers.size() - 1;
  vector<int> ret;
  while (l < r) {
    if (numbers[l] + numbers[r] > target) {
      r--
    }; else if (numbers[l] + numbers[r] < target) {
      l++;
    } else {
      ret.push_back(l + 1);
      ret.push_back(r + 1);
      break;
    }
  }
  return ret;
}
