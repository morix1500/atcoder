#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  vector<ll> m(5);
  for (int i = 0; i < n; i++) {
    char f = s[i][0];
    switch (f) {
    case 'M':
      m[0]++;
      break;
    case 'A':
      m[1]++;
      break;
    case 'R':
      m[2]++;
      break;
    case 'C':
      m[3]++;
      break;
    case 'H':
      m[4]++;
      break;
    }
  }
  vector<ll> P = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
  vector<ll> Q = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
  vector<ll> R = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};
  ll sum       = 0;
  for (ll i = 0; i < 10; i++) {
    sum += (m[P[i]] * m[Q[i]] * m[R[i]]);
  }
  cout << sum << endl;
}