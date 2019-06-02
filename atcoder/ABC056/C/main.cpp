#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x;
  cin >> x;
  ll sum = 0;
  ll i   = 1;
  while (sum < x) {
    sum += i;
    if (sum >= x) break;
    i++;
  }
  cout << i << endl;
}