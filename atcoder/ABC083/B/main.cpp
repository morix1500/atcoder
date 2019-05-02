#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  vector<int> s;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int sumt = 0;
    int t    = i;
    while (t) {
      sumt += t % 10;
      t /= 10;
    }
    if (sumt >= a && sumt <= b) { sum += i; }
  }
  cout << sum << endl;
}