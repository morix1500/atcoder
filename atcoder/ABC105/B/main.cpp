#include <bits/stdc++.h>
using namespace std;

bool dfs(int n, int a) {
  if (n == a) return true;
  if (n < a) return false;

  bool res1 = dfs(n, a + 4);
  bool res2 = dfs(n, a + 7);

  return res1 | res2;
}

int main() {
  int n;
  cin >> n;

  if (dfs(n, 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}