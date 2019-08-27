#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll L, R;
  cin >> L >> R;
  if (R * L < 2019) {
    cout << L * (L + 1) << endl;
    return 0;
  }

  ll mn = LLONG_MAX;
  for (ll i = L; i <= R; i++) {
    for (ll j = i + 1; j <= R; j++) {
      if (mn > (i * j) % 2019) {
        mn = (i * j) % 2019;
        if (mn == 0) {
          cout << mn << endl;
          return 0;
        }
      }
    }
  }
  cout << mn << endl;
}