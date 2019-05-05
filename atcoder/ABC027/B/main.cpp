#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  int h     = sum / n;
  int amari = 0;
  int hashi = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > h) {
      if (i != n - 1 && (a[i] - h + amari) != 0) hashi++;
      amari += a[i] - h;
    } else if (a[i] == h) {
      if (amari != 0) hashi++;
      continue;
    } else {
      if ((h - a[i] - amari) != 0) { hashi++; }
      amari -= h - a[i];
    }
  }
  if (amari == 0) {
    cout << hashi << endl;
  } else {
    cout << -1 << endl;
  }
}