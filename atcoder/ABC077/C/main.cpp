#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> A(n), B(n), C(n);
  for (int i = 0; i < n; i++)
    cin >> A[i];
  for (int i = 0; i < n; i++)
    cin >> B[i];
  for (int i = 0; i < n; i++)
    cin >> C[i];
  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  ll cnt = 0;
  for (int b = 0; b < n; b++) {
    auto i = lower_bound(A.begin(), A.end(), B[b]);
    ll a   = i - A.begin();

    auto i2 = upper_bound(C.begin(), C.end(), B[b]);
    ll c    = n - (i2 - C.begin());

    cnt += a * c;
  }
  cout << cnt << endl;
}