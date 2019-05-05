#include <bits/stdc++.h>
using namespace std;

string binary(int bina) {
  string ans = "";
  for (int i = 0; bina > 0; i++) {
    ans  = ans + to_string(bina % 2);
    bina = bina / 2;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  string b = binary(x);

  int sum   = 0;
  int index = 0;
  int last  = pow(2, n);
  for (int i = 1; i <= last; i += i) {
    string bi = binary(i);
    if (b[b.size() - bi.size()] == '1') { sum += a[index]; }
    index++;
  }
  cout << sum << endl;
}