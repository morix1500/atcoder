#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;

  int index = 0;
  for (int i = a; i <= b; i++) {
    if (index < k) {
      cout << i << endl;
      index++;
    } else if (i > b - k) {
      cout << i << endl;
    }
  }
}