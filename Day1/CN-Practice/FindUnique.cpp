/*
 You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list
  input -> [2, 2, 3, 4, 3, 5, 4]
  output -> 5
*/

#include <iostream>
using namespace std;

void print(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//xor operation to find unique 3^3 = 0, 0^3 = 3
int findUniqueOptimal(int arr[], int n) {
  int unique = 0;
  for(int i = 0; i < n; i++) {
    unique ^= arr[i];
  }
  return unique;
}

int findUnique(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    bool isUnique = true;
    for(int j = 0; j < n; j++) {
      if(j != i && arr[i] == arr[j]) { 
        isUnique = false;
        break;
      }
    }
    if(isUnique)
      return arr[i];
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

  cout << findUnique(arr, n) << endl;
  //print(arr, n);
  cout << findUniqueOptimal(arr, n) << endl;
  //print(arr, n);

  return 0;
}
