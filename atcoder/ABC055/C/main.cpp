#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll s, c;
  cin >> s >> c;

  if (s >= c) {
    cout << c / 2 << endl;
    return 0;
  }
  ll cnt = s;
  ll n   = c - (s * 2);
  cnt += (n / 4);
  cout << cnt << endl;
}