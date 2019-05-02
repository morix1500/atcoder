#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
    cin >> s[i];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#') continue;
      int cnt = 0;
      if (i != 0) {
        if (j != 0 && s[i - 1][j - 1] == '#') cnt++;
        if (s[i - 1][j] == '#') cnt++;
        if (j != w - 1 && s[i - 1][j + 1] == '#') cnt++;
      }
      if (j != 0 && s[i][j - 1] == '#') cnt++;
      if (j != w - 1 && s[i][j + 1] == '#') cnt++;
      if (i != h - 1) {
        if (j != 0 && s[i + 1][j - 1] == '#') cnt++;
        if (s[i + 1][j] == '#') cnt++;
        if (j != w - 1 && s[i + 1][j + 1] == '#') cnt++;
      }
      s[i][j] = cnt + '0';
    }
    cout << s[i] << endl;
  }
}