#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;

  cin >> N >> S >> K;

  char str = S.at(K - 1);
  for (int i = 0; i < N; i++) {
    if (S.at(i) != str) {
      cout << '*';
    } else {
      cout << S.at(i);
    }
  }
  cout << endl;
}