#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  vector<int> p(k);
  for (int i = 0; i < k; i++)
    cin >> p[i];

  map<int, int> ma;
  ma[a]++;
  ma[b]++;
  bool res = true;
  for (int i = 0; i < k; i++) {
    if (ma[p[i]] == 1) {
      res = false;
      break;
    } else {
      ma[p[i]]++;
    }
  }
  cout << (res ? "YES" : "NO") << endl;
}