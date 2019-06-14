#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> b(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i + 1] = b[i] + a[i];
  }
  ll sum = 0;
  for (int i = 0; i < n - k + 1; i++) {
    sum += (b[i + k] - b[i]);
  }
  cout << sum << endl;
}