#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  ll res = k * pow(k - 1, n - 1);
  cout << res << endl;
}