#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  vector<int> l(n), r(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    l[i]--;
    r[i]--;
  }

  for (int i = 0; i < n; i++) {
    int le = l[i];
    int ri = r[i];
    while (le < ri) {
      swap(s[le], s[ri]);
      le++;
      ri--;
    }
  }
  cout << s << endl;
}