#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  for (int i = 0; i <= a * 500; i += 500) {
    for (int j = 0; j <= b * 100; j += 100) {
      for (int z = 0; z <= c * 50; z += 50) {
        if (i + j + z == x) cnt++;
      }
    }
  }
  cout << cnt << endl;
}