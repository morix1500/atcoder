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

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int size = BC.size();
    for (int j = 0; j < size; j++) {
      if (BC[j].second == 0) continue;
      if (A[i] < BC[j].first) {
        A[i] = BC[j].first;
        BC[j].second--;
        if (BC[j].second == 0) {
          BC.erase(BC.begin() + j);
          j--;
        }
      }
    }
    sum += A[i];
  }
  cout << sum << endl;
}