#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> eratosthenes() {
  int MAX = 1010;
  vector<int> is_prime(MAX, 1);
  is_prime[0] = 0;
  is_prime[1] = 0;
  for (int i = 2; i < MAX; i++) {
    if (!is_prime[i]) continue;
    for (int j = i * 2; j < MAX; j += i)
      is_prime[j] = 0;
  }
  return is_prime;
}

int main() {
  ll n;
  cin >> n;

  auto isPrime = eratosthenes();

  ll M = 1000000007;
  map<int, int> m;
  for (ll k = 2; k <= n; k++) {
    ll x = k;
    for (ll i = 1; i <= n; i++) {
      if (isPrime[i] == 1) {
        while (x % i == 0) {
          x /= i;
          m[i] += 1;
        }
      }
    }
  }
  ll cnt = 1;
  for (auto v : m) {
    cnt = cnt % M * (v.second + 1) % M;
  }
  cout << cnt % M << endl;
}