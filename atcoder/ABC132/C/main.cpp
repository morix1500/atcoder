#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++)
    cin >> d[i];

  sort(d.begin(), d.end());
  int m = n / 2;
  cout << d[m] - d[m - 1] << endl;
}