#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b = a;
  sort(b.begin(), b.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    if (a[i] == b[0]) {
      cout << b[1] << endl;
    } else {
      cout << b[0] << endl;
    }
  }
}