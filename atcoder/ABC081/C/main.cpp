#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }

  vector<pair<int, int>> arr;
  for (auto v : m) {
    arr.push_back(make_pair(v.second, v.first));
  }

  sort(arr.begin(), arr.end(), greater<pair<int, int>>());

  int sum = 0;
  for (int i = k; i < arr.size(); i++) {
    sum += arr[i].first;
  }
  cout << sum << endl;
}