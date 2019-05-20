#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> c(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c[i][j];
    }
  }

  int c112 = c[0][1] - c[0][0];
  int c212 = c[1][1] - c[1][0];
  int c312 = c[2][1] - c[2][0];
  if (!(c112 == c212 && c212 == c312)) {
    cout << "No" << endl;
    return 0;
  }
  int c123 = c[0][2] - c[0][1];
  int c223 = c[0][2] - c[0][1];
  int c323 = c[0][2] - c[0][1];
  if (!(c123 == c223 && c223 == c323)) {
    cout << "No" << endl;
    return 0;
  }
  int c12a = c[1][0] - c[0][0];
  int c12b = c[1][1] - c[0][1];
  int c12c = c[1][2] - c[0][2];
  if (!(c12a == c12b && c12b == c12c)) {
    cout << "No" << endl;
    return 0;
  }
  int c23a = c[2][0] - c[1][0];
  int c23b = c[2][1] - c[1][1];
  int c23c = c[2][2] - c[1][2];
  if (!(c23a == c23b && c23b == c23c)) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}