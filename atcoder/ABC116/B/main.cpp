#include <bits/stdc++.h>
using namespace std;
static const int MAX = 1000000;

int f(int num) {
  if (num % 2 == 0) {
    return num / 2;
  } else {
    return 3 * num + 1;
  }
}

int main() {
  int s;
  cin >> s;
  vector<int> a(MAX);
  for (int i = 1; i <= MAX; i++) {
    if (i == 1) {
      a[i] = s;
      continue;
    }
    a[i] = f(a[i - 1]);
  }
  for (int i = 1; i <= MAX; i++) {
    for (int j = i + 1; j <= MAX; j++) {
      if (a[i] == a[j]) {
        cout << j << endl;
        return 0;
      }
    }
  }
  cout << 0 << endl;
}