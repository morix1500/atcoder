#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> M(45);

int fib(int i) {
  if (i == 0 || i == 1) { return 1; }
  if (M.at(i) != 0) { return M.at(i); }

  M.at(i - 1) = fib(i - 1);
  M.at(i - 2) = fib(i - 2);

  return M.at(i - 1) + M.at(i - 2);
}

int makeFib() {
  vector<int> F(45);
  F.at(0) = 1;
  F.at(1) = 1;
  for (int i = 2; i <= n; i++) {
    F.at(i) = F.at(i - 2) + F.at(i - 1);
  }
  return F.at(n);
}

int main() {
  cin >> n;
  cout << fib(n) << endl;
  cout << makeFib() << endl;
}