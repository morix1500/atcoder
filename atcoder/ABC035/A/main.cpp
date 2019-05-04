#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int w, h;
  cin >> w >> h;
  int g = gcd(w, h);
  cout << w / g << ":" << h / g << endl;
}