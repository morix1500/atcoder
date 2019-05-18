#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  string s;
  cin >> n >> s;
  vector<int> e(n + 1);
  e[0]     = 0;
  int eCnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'E') {
      eCnt++;
      e[i + 1] = e[i] + 1;
    } else {
      e[i + 1] = e[i];
    }
  }

  int mn = INT_MAX;
  for (int i = 0; i <= n; i++) {
    mn = min(mn, eCnt - e[i] + (i - e[i]));
  }
  cout << mn << endl;
}