#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;
  while(low <= high) {
    int mid = (low + high)/2;
    if(nums[mid] == target) return true;
    //trim down search space in case of duplicate elements (nums[low] == nums[mid] == nums[high])
    if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
      low++, high--;
      continue;
    }

    //left sorted array
    if(nums[low] <= nums[mid]) {
      if(nums[low] <= target && target <= nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    //right sorted array
    else {
      if(nums[mid] <= target && target <= nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return false;
}

int main() {
  vector<int> nums = {3, 1, 2, 3, 3, 3, 3};
  int target = 1;
  cout << search(nums, target);

  return 0;
}
