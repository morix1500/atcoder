#include <bits/stdc++.h>
using namespace std;

vector<int> memo(100000);

int dfs(vector<int> &arr, int num, int t) {
  if (memo[num] == 1) return -1;
  if (arr[num] == t) return 1;
  memo[num] = 1;
  int tmp   = dfs(arr, arr[num], t);
  if (tmp == -1) return -1;
  return 1 + tmp;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    arr[i]--;
  }
  cout << dfs(arr, 0, 1) << endl;
}