/*
 You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array
  input -> [0, 7, 2, 5, 4, 7, 1, 3, 6] n = 9, numbers range from 0 to 7
  output -> 7 is duplicate number
*/

#include <iostream>
using namespace std;

int findDuplicateOptimal(int arr[], int n) {
  int sumOfN_2 = ((n-2) * (n-1)) / 2;
  int currSum = 0;
  for(int i = 0; i < n; i++) {
    currSum += arr[i];
  }
  return currSum - sumOfN_2;
}

int findDuplicate(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(arr[i] == arr[j]) return arr[i];
    }
  }
  return -1;
}

int main() {

  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << findDuplicate(arr, n) << endl;
  cout << findDuplicateOptimal(arr, n) << endl;

  return 0;
}
