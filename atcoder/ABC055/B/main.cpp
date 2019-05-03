#include <bits/stdc++.h>
using namespace std;

long long kaijo(long long num) {
  if (num == 1) return 1;
  return num * kaijo(num - 1) % 1000000007;
}

int main() {
  int n;
  cin >> n;
  cout << kaijo(n) << endl;
}