#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end(), greater<int>());
  int sum = 0;
  for (int i = 1; i < n; i++) {
    sum += l[i];
  }
  if (l[0] < sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}