#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {
  int lastnonzero = 0;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] != 0)
      nums[lastnonzero++] = nums[i++];
    else if (nums[i] == 0)
      lastnonzero = i;
  }
}
