
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = a; i <= b; i++) {
    string a = to_string(i);
    if (a[0] == a[4] && a[1] == a[3]) cnt++;
  }
  cout << cnt << endl;
}