#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
  int low = 0, mid = 0, high = n - 1;
  while(mid <= high) {
    if(arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    } else if(arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }

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
  sort012(arr, n);

  return 0;
}
