#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  for (int i = n - 1; i > 0; i--) {
    if (h[i] < h[i - 1]) {
      if (h[i - 1] - h[i] == 1) {
        h[i - 1]--;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}