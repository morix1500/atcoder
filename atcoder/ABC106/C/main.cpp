#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  ll k;
  cin >> s >> k;
  ll one = 0;
  for (ll i = 0; i < k; i++) {
    if (s[i] != '1') {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}