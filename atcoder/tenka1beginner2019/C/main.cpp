#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  string S;

  cin >> N >> S;

  ll res = 1000000;
  vector<ll> ba(N), wa(N);
  int b = 0, w = -1;
  int i = 0, j = N - 1;
  while (i < N) {
    if (S.at(j) == '.') { w++; }
    if (S.at(i) == '#') { b++; }
    wa.at(j) = w;
    ba.at(i) = b;
    i++;
    j--;
  }

  for (int i = 0; i < N; i++) {
    res = min(res, (wa.at(i) + ba.at(i)));
  }
  if (res == 1000000) {
    cout << 0 << endl;
  } else {
    cout << res << endl;
  }
}