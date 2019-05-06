#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();
  int zero = 0;
  int one  = 0;
  for (int i = 0; i < size; i++) {
    if (s[i] == '0')
      zero++;
    else
      one++;
  }
  cout << 2 * min(zero, one) << endl;
}