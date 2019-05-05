#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> s(3), e(3);
  for (int i = 0; i < 3; i++)
    cin >> s[i] >> e[i];

  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += (s[i] * e[i] / 10);
  }
  cout << sum << endl;
}