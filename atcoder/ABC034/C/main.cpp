#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll MOD = 1000000007;

int pow(ll i, ll j) {
  ll tmp = 1;
  while (j) {
    if (j % 2) tmp = tmp * i % MOD;
    i = i * i % MOD;
    j /= 2;
  }
  return tmp;
}

int main() {
  int W, H;
  cin >> W >> H;
  W--;
  H--;
  ll a = 1, b = 1;
  for (int i = 0; i < W; i++)
    a = a * (W + H - i) % MOD;
  for (int i = 2; i <= W; i++)
    b = b * i % MOD;
  cout << a * pow(b, MOD - 2) % MOD << endl;
}