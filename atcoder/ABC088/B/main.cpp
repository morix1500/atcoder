#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());
  int al = 0;
  int bo = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      al += a[i];
    else
      bo += a[i];
  }
  cout << al - bo << endl;
}