#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if ((C > A && C < B) || (C > B && C < A)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}