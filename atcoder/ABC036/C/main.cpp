#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b.begin(), b.end());
  map<ll, int> m;

  int index = 1;
  for (int i = 0; i < n; i++) {
    if (m[b[i]] == 0) {
      m[b[i]] = index;
      index++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << m[a[i]] - 1 << endl;
  }
}