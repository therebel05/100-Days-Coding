/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/

//Time Complexity = O(n+k)
//Space Complexity = O(k)
//We can write an optimal approach to get the space complexity to constant

#include <iostream>
using namespace std;

void rotateBrute(int arr[], int n, int k) {
  k = k % n;
  int temp[k];
  //storing k right elements into a temp array
  for(int i = n - k; i < n; i++) {
    temp[i - (n - k)] = arr[i];
  }
  //shifting original array k places
  for(int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  //put back temp into the original array
  for(int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }

  //print the array
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

  rotateBrute(arr, n, k);

  return 0;
}




