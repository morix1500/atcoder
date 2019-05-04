#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> p(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> p[i];
    sum += p[i];
  }

  int m      = sum / 2;
  string res = "";
  for (int i = 0; i < n; i++) {
    if (p[i] > m) { res = s[i]; }
  }
  if (res.empty()) { res = "atcoder"; }
  cout << res << endl;
}