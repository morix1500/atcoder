#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll MOD = 1000000007;

ll factorial(ll n) {
  if (n == 0) return 1;
  return n % MOD * factorial(n - 1) % MOD;
}

int main() {
  int W, H;
  cin >> W >> H;
  W--;
  H--;

}