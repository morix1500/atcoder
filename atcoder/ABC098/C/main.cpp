#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  string s;
  cin >> n >> s;
  vector<int> w(n + 1), e(n + 1);
  e[0]     = 0;
  w[n]     = 0;
  int i    = 0;
  int j    = n;
  int wCnt = 0, eCnt = 0;
  while (i < n && j > 0) {
    if (s[i] == 'E') {
      e[i + 1] = e[i] + 1;
      eCnt++;
    } else {
      e[i + 1] = e[i];
    }
    if (s[j - 1] == 'W') {
      w[j - 1] = w[j] + 1;
      wCnt++;
    } else {
      w[j - 1] = w[j];
    }
    i++;
    j--;
  }
  int mn = INT_MAX;
  for (int i = 0; i <= n; i++) {
    mn = min(mn, (wCnt - w[i]) + (eCnt - e[i]));
  }
  cout << mn << endl;
}