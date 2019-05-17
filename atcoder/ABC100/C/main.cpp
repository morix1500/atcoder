#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> even;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) even.push_back(a[i]);
  }

  int size = even.size();
  if (size == 0) {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < even.size(); i++) {
    while (even[i] % 2 == 0) {
      even[i] /= 2;
      cnt++;
    }
  }

  cout << cnt << endl;
}