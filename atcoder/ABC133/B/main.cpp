#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<double>> x(N, vector<double>(D));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> x[i][j];
    }
  }
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int y = i + 1; y < N; y++) {
      double sum = 0.0;
      for (int z = 0; z < D; z++) {
        sum += pow(abs(x[i][z] - x[y][z]), 2.0);
      }
      double a = sqrt(sum);
      if (ceil(a) == floor(a)) { cnt++; }
    }
  }
  cout << cnt << endl;
}