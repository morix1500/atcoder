#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++)
    cin >> x[i];

  int l         = n - 1;
  int M         = (l + 1) / 2;
  vector<int> z = x;
  sort(z.begin(), z.end());
  map<int, int> m;

  int first  = z[M - 1];
  int second = z[M];
  for (int i = 0; i < M; i++) {
    m[z[i]]++;
  }

  for (int i = 0; i < n; i++) {
    if (m[x[i]] != 0) {
      if (second == x[i]) {
        cout << first << endl;
      } else {
        cout << second << endl;
      }
    } else {
      cout << first << endl;
    }
  }
}