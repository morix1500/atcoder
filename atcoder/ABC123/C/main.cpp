#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> s(5);

  ll mn         = (1LL << 60);
  int min_index = 0;
  for (int i = 0; i < 5; i++) {
    cin >> s[i];
    if (s[i] < mn) {
      mn        = s[i];
      min_index = i;
    }
  }
  ll min_cost = s[min_index];
  int t1      = 4;

  ll c = ceil(double(n) / double(min_cost));
  if (n <= min_cost) {
    c  = 0;
    t1 = 5;
  };
  cout << c + t1 << endl;
}