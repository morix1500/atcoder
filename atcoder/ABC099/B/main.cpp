#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  vector<int> height(1000);
  vector<int> height_sa(1000);
  for (int i = 1; i <= 999; i++) {
    height[i]      = i * (i + 1) / 2;
    int tmp        = height[i] - height[i - 1];
    height_sa[tmp] = height[i];
  }

  int sa = height_sa[b - a];
  cout << sa - b << endl;
}