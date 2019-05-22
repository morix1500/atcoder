#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int Z   = N - M;
  int sum = Z * 100;
  sum += (1900 * M);
  cout << sum * pow(2, M) << endl;
}