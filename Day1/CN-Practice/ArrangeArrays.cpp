/*
 You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
*/

#include <iostream>
using namespace std;

void arrange(int arr[], int n) {
  int val = 1;
  int start = 0, end = n - 1;
  while(start <= end) {
    //this condition handles the middle element when n is odd, otherwise arr[index] will be overwritten again
    if(start == end) {
      arr[start] = val;
      break;
    }
    arr[start] = val;
    val++;
    arr[end] = val;
    val++;
    start++;
    end--;
  }
}

int main() {

  int arr[100];
  int n;
  cin >> n;

  arrange(arr, n);

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
