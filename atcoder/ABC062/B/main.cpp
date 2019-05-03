#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i++) {
    cin >> a[i];
    a[i] = "#" + a[i] + "#";
  }

  for (int i = 0; i < h; i++) {
    if (i == 0) {
      for (int j = 0; j < w + 2; j++)
        cout << "#";
      cout << endl;
    }
    cout << a[i];
    cout << endl;
    if (i == h - 1) {
      for (int j = 0; j < w + 2; j++)
        cout << "#";
      cout << endl;
    }
  }
}