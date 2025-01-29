/*
You have been given two integer arrays/list(ARR1 and ARR2) of size M and N, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
  input -> n = 6, m = 4, arr1 = [2 6 8 5 4 3], arr2 = [2 3 4 7]
  output -> 2 4 3 (order of arr1 maintained for printing elements)
*/

#include <iostream>
#include <climits>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n, int m) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(arr1[i] == arr2[j]) {
        cout << arr1[i] << " ";
        arr2[j] = INT_MIN;
        break;
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  int arr1[100], arr2[100];

  for(int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> arr2[i];
  }

  findIntersection(arr1, arr2, n, m);

  return 0;
}

