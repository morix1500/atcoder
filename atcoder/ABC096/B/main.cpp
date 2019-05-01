#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> arr(3);
  int k;
  cin >> arr[0] >> arr[1] >> arr[2] >> k;

  sort(arr.begin(), arr.end(), greater<int>());
  for (int i = 1; i <= k; i++) {
    arr[0] = arr[0] * 2;
  }
  cout << arr[0] + arr[1] + arr[2] << endl;
}