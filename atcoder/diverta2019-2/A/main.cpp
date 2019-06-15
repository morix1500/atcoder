#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  int z = n - k;
  if (k == 1) {
    cout << 0 << endl;
    return 0;
  }
  if (z <= 0) {
    cout << 0 << endl;
  } else {
    cout << z << endl;
  }
}