#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int sum = 0;
  for (int j = 0; j < n; j++) {
    int index = 0;
    while ((a[j] * index) + 1 <= d) {
      sum++;
      index++;
    }
  }

  cout << sum + x << endl;
}