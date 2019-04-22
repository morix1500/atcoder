#include <bits/stdc++.h>
using namespace std;

int parent(int n) { return n / 2; }
int left(int n) { return 2 * n; }
int right(int n) { return 2 * n + 1; }

int main() {
  int H;
  cin >> H;

  vector<int> arr(H);
  for (int i = 0; i < H; i++) {
    cin >> arr.at(i);
  }

  for (int i = 1; i <= H; i++) {
    cout << "node " << i << ": key = " << arr.at(i - 1) << ", ";
    if (i != 1) { cout << "parent key = " << arr.at(parent(i) - 1) << ", "; }
    int l = left(i);
    int r = right(i);
    if (l <= H) { cout << "left key = " << arr.at(l - 1) << ", "; }
    if (r <= H) { cout << "right key = " << arr.at(r - 1) << ", "; }
    cout << endl;
  }
}