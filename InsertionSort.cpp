#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &nums) {
  int n = nums.size();
  // TODO: เขียน Logic ตรงนี้ (ประมาณ 5-7 บรรทัด)
  // Hint: ใช้ for (i) คู่กับ while (j)
  for (int i = 1; i < n; i++) {
    int keys = nums[i];
    int j = i - 1;
    while (j >= 0 && keys < nums[j]) {
      nums[j + 1] = nums[j];
      j--;
    }
    nums[j + 1] = keys;
  }
}

int main() {
  vector<int> data = {5, 2, 4, 6, 1, 3};

  insertionSort(data);

  cout << "Sorted: ";
  for (int x : data)
    cout << x << " ";
  cout << endl;

  return 0;
}
