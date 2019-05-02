#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int num = n;
  int sum = 0;

  while (num) {
    sum += (num % 10);
    num /= 10;
  }
  if (n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}