#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < q; j++) {
    int Q;
    cin >> Q;
    ll sum = 0;
    ll res = 0;

    int right = 0;
    for (int left = 0; left < n; left++) {
      while (right < n && sum + a[right] <= Q) {
        sum += a[right];
        right++;
      }
      res += (right - left);
      if (right == left)
        right++;
      else
        sum -= a[left];
    }
    cout << res << endl;
  }
}