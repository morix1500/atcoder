#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll H, W;
  cin >> H >> W;

  ll sum = H * W;
  if (sum % 3 == 0) {
    cout << 0 << endl;
    return 0;
  }
  ll z = sum / 3;
  vector<ll> arr1(3);
  vector<ll> arr2(3);
  ll h  = 1;
  ll w  = 1;
  ll mn = INT_MAX;
  while (h <= H || w <= W) {
    if (h <= H) {
      arr1[0] = W * h;
      ll s1   = sum - arr1[0];
      if (s1 % 2 == 0) {
        arr1[1] = (s1 / 2);
        arr1[2] = (s1 / 2);
      } else {
        ll h2   = H - h;
        ll w2   = W / 2;
        arr1[1] = s1 - (h2 * w2);
        arr1[2] = h2 * w2;
      }
      sort(arr1.begin(), arr1.end());
      mn = min(mn, arr1[2] - arr1[0]);
    }
    if (w <= W) {
      arr2[0] = H * w;
      ll s2   = sum - arr2[0];
      if (s2 % 2 == 0) {
        arr2[1] = (s2 / 2);
        arr2[2] = (s2 / 2);
      } else {
        ll h2   = H / 2;
        ll w2   = W - w;
        arr2[1] = s2 - (h2 * w2);
        arr2[2] = h2 * w2;
      }
      sort(arr2.begin(), arr2.end());
      mn = min(mn, arr2[2] - arr2[0]);
    }

    h++;
    w++;
  }
  cout << mn << endl;
}