#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  bool plus = a[0] >= 0 ? true : false;

  ll cnt  = 0;
  ll cnt2 = 0;
  ll sum  = 0;
  ll sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    sum2 += a[i];

    if (i % 2 == 0) {
      // +
      if (sum <= 0) {
        cnt += abs(sum) + 1;
        sum = 1;
      }
      // -
      if (sum2 >= 0) {
        cnt2 += sum2 + 1;
        sum2 = -1;
      }
    } else {
      // +
      if (sum2 <= 0) {
        cnt2 += abs(sum2) + 1;
        sum2 = 1;
      }
      // -
      if (sum >= 0) {
        cnt += sum + 1;
        sum = -1;
      }
    }
  }
  cout << min(cnt, cnt2) << endl;
}