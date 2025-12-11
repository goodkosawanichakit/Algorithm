#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
  int first = -1;
  int last = -1;
  int l = 0;
  int r = nums.size() - 1;
  int m;

  while (l <= r) {
    int m = l + (r - l) / 2;

    if (nums[m] == target) {
      first = m;
      r = m - 1;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  l = 0;
  r = nums.size() - 1;

  while (l <= r) {
    m = l + (r - l) / 2;

    if (nums[m] == target) {
      last = m;
      l = m + 1;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  return {first, last};
}
