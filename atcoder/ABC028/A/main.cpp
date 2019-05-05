#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (59 >= n) {
    cout << "Bad" << endl;
  } else if (89 >= n) {
    cout << "Good" << endl;
  } else if (99 >= n) {
    cout << "Great" << endl;
  } else {
    cout << "Perfect" << endl;
  }
}