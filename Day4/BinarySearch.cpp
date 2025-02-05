/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;
  while(low <= high) {
    int mid = (low + high)/2;
    if(nums[mid] == target) {
      return mid;
    } else if(nums[mid] > target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {

  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int target;
  cin >> target;
  cout << search(nums, target);

  return 0;
}
