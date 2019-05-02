#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> c(n - 1), s(n - 1), f(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> c[i] >> s[i] >> f[i];
  }
  for (int i = 0; i < n; i++) {
    int sum = 0;
    if (i != n - 1) {
      sum += s[i];
      for (int j = i; j < n - 1; j++) {
        if (j != i && sum != s[j] && sum % f[j] != 0) {
          sum = sum + f[j] - sum % f[j];
        }
        sum += c[j];
        if (j != n - 2 && sum < s[j + 1]) { sum += (s[j + 1] - sum); }
      }
    }
    cout << sum << endl;
  }
}