#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> s(H);
  for (int i = 0; i < H; i++)
    cin >> s[i];

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (s[i][j] == '.') continue;

      bool f = false;
      if (i != 0 && s[i - 1][j] == '#') f = true;
      if (i != H - 1 && s[i + 1][j] == '#') f = true;
      if (j != 0 && s[i][j - 1] == '#') f = true;
      if (j != W - 1 && s[i][j + 1] == '#') f = true;

      if (!f) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}