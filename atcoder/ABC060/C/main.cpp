#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N, T;
  cin >> N >> T;
  vector<ll> t(N);
  for (int i = 0; i < N; i++)
    cin >> t[i];

  ll sum = 0;
  for (int i = 1; i < N; i++) {
    ll diff = t[i] - t[i - 1];
    if (diff >= T) {
      sum += T;
    } else {
      sum += diff;
    }
  }
  cout << sum + T << endl;
}