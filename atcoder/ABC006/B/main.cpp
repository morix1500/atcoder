#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> arr(n);
  arr[0] = 0;
  arr[1] = 0;
  arr[2] = 1;
  for (int i = 3; i < n; i++) {
    arr[i] = (arr[i - 3] + arr[i - 2] + arr[i - 1]) % 10007;
  }
  long long res = arr[n - 1] % 10007;
  cout << res << endl;
}