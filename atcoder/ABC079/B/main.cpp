#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<ll> s(n + 1);
  s[0] = 2;
  s[1] = 1;
  for (int i = 2; i <= n; i++) {
    s[i] = s[i - 1] + s[i - 2];
  }
  cout << s[n] << endl;
}