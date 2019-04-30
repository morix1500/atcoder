#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  for (ll i = n; i <= 10000000000; i += n) {
    if (i % 2 == 0 && i % n == 0) {
      cout << i << endl;
      return 0;
    }
  }
}