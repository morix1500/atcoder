#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, p;
  cin >> a >> p;
  ll sum = 0;
  if (a > 0) { sum += (a * 3); }
  sum += p;

  cout << sum / 2 << endl;
}