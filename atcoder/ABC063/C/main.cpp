#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    sum += s[i];
  }
  if (sum % 10 != 0) {
    cout << sum << endl;
    return 0;
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    if ((sum - s[i]) % 10 != 0) {
      cout << sum - s[i] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
}