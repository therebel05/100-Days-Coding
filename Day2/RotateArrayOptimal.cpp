/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/
//Time Complexity = O(2n)
//Space Complexity = O(1)

#include <iostream>
#include <algorithm>
using namespace std;

void rotateOptimal(int arr[], int n, int k) {
  reverse(arr + k + 1, arr + n); // 1 2 3 4 7 6 5
  reverse(arr, arr + k + 1); // 4 3 2 1 7 6 5
  reverse(arr, arr + n); //5 6 7 1 2 3 4

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int k;
  cin >> k;

  rotateOptimal(arr, n, k);

  return 0;
}




