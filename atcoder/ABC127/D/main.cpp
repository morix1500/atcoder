#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> A(n);
  for (int i = 0; i < n; i++)
    cin >> A[i];
  vector<pair<ll, ll>> BC(m);
  for (int i = 0; i < m; i++) {
    pair<ll, ll> p;
    cin >> p.second >> p.first;
    BC[i] = p;
  }
  sort(A.begin(), A.end());
  sort(BC.begin(), BC.end(), greater<pair<ll, ll>>());

  ll sum    = 0;
  int index = 0;
  for (int i = 0; i < n; i++) {
    if (BC.size() > index && A[i] < BC[index].first) {
      sum += BC[index].first;
      BC[index].second--;
      if (BC[index].second == 0) index++;
    } else {
      sum += A[i];
    }
  }
  cout << sum << endl;
}