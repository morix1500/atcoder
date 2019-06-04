#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N, x;
  cin >> N >> x;
  vector<ll> a(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];

  ll cnt = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0) continue;
    ll sum = a[i - 1] + a[i];
    if (sum <= x) continue;
    ll diff1 = max(0LL, a[i] - x);
    ll diff2 = max(0LL, a[i - 1] - x);
    cnt += diff1;
    cnt += diff2;
    a[i] -= diff1;
    a[i - 1] -= diff2;
    sum = a[i - 1] + a[i];

    ll diff = abs(sum - x);
    cnt += diff;
    a[i] -= diff;
  }
  cout << cnt << endl;
}