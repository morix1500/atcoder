#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  string ans = "";
  ll num     = n;

  for (int i = 0; num != 0; i++) {
    int b = num % 2;
    if (b < 0) b += 2;
    ans = ans + to_string(b);
    num = (num - b) / -2;
  }
  reverse(ans.begin(), ans.end());
  if (ans.empty()) {
    cout << 0 << endl;
  } else {
    cout << ans << endl;
  }
}