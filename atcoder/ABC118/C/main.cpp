#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  priority_queue<ll> pq;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    pq.push(a[i] * -1);
  }

  ll mn = (1LL << 60);
  while (true) {
    vector<ll> arr;
    ll i = 0;
    while (!pq.empty()) {
      ll tmp = pq.top();
      pq.pop();
      if (tmp != 0) arr.push_back(tmp * -1);
      i++;
    }
    pq.push(arr[0] * -1);
    mn      = min(mn, arr[0]);
    ll size = arr.size();
    if (size == 1) break;
    for (ll j = 1; j < size; j++) {
      ll tmp = arr[j] - ((arr[j] / arr[0]) * arr[0]);
      pq.push(tmp * -1);
    }
  }
  cout << mn << endl;
}