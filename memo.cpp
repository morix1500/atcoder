#include <bits/stdc++.h>
using namespace std;

// 最大公約数
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

// 配列出力
void arrayOutput(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}