#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<int> &w, int n, int k, ll P) {
  int index = 0;
  for (int i = 0; i < k; i++) {
    ll s = 0;
    while (s + w.at(index) <= P) {
      s += w.at(index);
      index++;
      if (index == n) return P;
    }
  }
  return 0;
}

int main() {
  int n, k;
  vector<int> w;

  cin >> n >> k;
  w.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> w.at(i);
  }

  ll left  = 0;
  ll right = 100000 * 10000;

  while (right - left > 1) {
    ll mid = (left + right) / 2;
    ll v   = check(w, n, k, mid);
    if (v >= n) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << right << endl;
}