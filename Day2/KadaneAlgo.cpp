/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int sum = 0, maxSum = INT_MIN;
  for(int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if(sum > maxSum) {
      maxSum = sum;
    }
    // don't carry negative sums for next iteration
    if(sum < 0) {
      sum = 0;
    }
  }
  return maxSum;
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cout << maxSubArray(nums) << endl;

  return 0;
}





