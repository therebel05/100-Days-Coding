#include <iostream>
using namespace std;

void swapIfGreater(int arr1[], int arr2[], int idx1, int idx2) {
  if(arr1[idx1] > arr2[idx2]) {
    swap(arr1[idx1], arr2[idx2]);
  }
}

void merge(int arr1[], int arr2[], int n, int m) {
  int len = (n + m);
  int gap = (len / 2) + (len % 2);

  while(gap > 0) {
    int left = 0;
    int right = left + gap;

    while(right < len) {
      //left in arr1 and right in arr2
      if(left < n && right >= n) {
        swapIfGreater(arr1, arr2, left, right - n);
      }
      //both left and right in arr2
      else if(left >= n) {
        swapIfGreater(arr2, arr2, left - n, right - n);
      }
      //both left and right in arr1
      else {
        swapIfGreater(arr1, arr1, left, right);
      }
      left++;
      right++;
    }
    if(gap == 1) break;
    gap = (gap / 2) + (gap % 2);
  }
}

int main() {

  int n, m;
  cin >> n >> m;
  int arr1[n];
  int arr2[m];
  for(int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> arr2[i];
  }

  merge(arr1, arr2, n, m);

  for(int i = 0; i < n; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < m; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;

  return 0;
}
