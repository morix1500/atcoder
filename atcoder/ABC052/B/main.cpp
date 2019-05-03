#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int mx  = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'I') {
      cnt++;
    } else {
      cnt--;
    }
    mx = max(mx, cnt);
  }
  cout << mx << endl;
}