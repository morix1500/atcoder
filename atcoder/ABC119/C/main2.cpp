#include <bits/stdc++.h>
using namespace std;

int n, A, B, C;

int dfs(vector<int> &arr, int cur, int a, int b, int c) {
  if (cur == n) {
    if (min(a, min(b, c)) > 0) {
      int sum = abs(A - a) + abs(B - b) + abs(C - c);
      return sum - 30;
    } else {
      return (1 << 21);
    }
  }
  int ret1 = dfs(arr, cur + 1, a, b, c);
  int ret2 = dfs(arr, cur + 1, a + arr[cur], b, c) + 10;
  int ret3 = dfs(arr, cur + 1, a, b + arr[cur], c) + 10;
  int ret4 = dfs(arr, cur + 1, a, b, c + arr[cur]) + 10;

  return min(ret1, min(ret2, min(ret3, ret4)));
}

int main() {
  cin >> n >> A >> B >> C;
  vector<int> l(n);
  for (int i = 0; i < n; i++)
    cin >> l[i];

  cout << dfs(l, 0, 0, 0, 0) << endl;
}