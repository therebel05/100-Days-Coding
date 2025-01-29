#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
  int i = 0, j = arr.size() - 1;
  while(i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

int main() {
  int n;
  cin >> n; // Read the size of the array before initializing the vector
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  reverseArray(arr);

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
