#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll m = 1000000007;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll res = (((a * b) % m) * c) % m;
  cout << res << endl;
}