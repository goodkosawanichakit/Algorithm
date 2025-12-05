#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twosum(vector<int> &nums, int target);

int main() {
  vector<int> nums = {2, 7, 11, 15};
  vector<int> result = twosum(nums, 9);
  for (int i : result)
    cout << i << ' ';
  cout << endl;
  return 0;
}

vector<int> twosum(vector<int> &nums, int target) {
  unordered_map<int, int> seen;
  vector<int> return_vec;
  for (int i = 0; i < nums.size(); i++) {
    int x = target - nums[i];
    if (seen.find(x) == seen.end())
      seen[nums[i]] = i;
    else {
      return_vec.push_back(i);
      return_vec.push_back(seen[x]);
    }
  }
  return return_vec;
}
