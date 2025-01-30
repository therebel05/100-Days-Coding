/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
  //figure out the first zero in the array
  int firstZeroIdx = -1;
  for(int i = 0; i < nums.size(); i++) {
    if(nums[i] == 0) {
      firstZeroIdx = i;
      break;
    }
  }

  if(firstZeroIdx == -1) return;

  //move i from firstZeroIndex + 1 to n and keep checking
  for(int i = firstZeroIdx + 1; i < nums.size(); i++) {
    if(nums[i] != 0) {
      swap(nums[i], nums[firstZeroIdx]);
      firstZeroIdx++;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  moveZeroes(nums);

  for(auto num : nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}




