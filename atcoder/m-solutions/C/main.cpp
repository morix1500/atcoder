#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll M = 1000000007;

int main() {
  ll N, A, B, C;
  cin >> N >> A >> B >> C;

  ll sum = 0;
  for (ll i = 1; i <= N; i++) {
    if (i == 1) {
      sum += (A + B);
    } else {
      if (C == 0) {
        sum += i * (A + B);

      } else {
        sum += i * ((C * i) * (A + B));
      }
    }
  }
  ll tmp = 1 / (sum / 100.0);
  cout << tmp % M << endl;

  cout << (312500008 * 36) % M << endl;
}