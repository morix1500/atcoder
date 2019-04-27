#include <bits/stdc++.h>
using namespace std;
static const int MAX = 100000;

int n;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  if (n == 2) {
    int m = max(A[1], A[2]);
    cout << m << endl;
    return 0;
  }

  vector<int> L(n + 1);
  vector<int> R(n + 1);

  for (int i = 0; i < n; i++) {
    L[i + 1] = gcd(L[i], A[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    R[i] = gcd(R[i + 1], A[i]);
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    res = max(res, gcd(L[i], R[i + 1]));
  }

  cout << res << endl;
}