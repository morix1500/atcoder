#include <bits/stdc++.h>
using namespace std;

int main() {
  string abcd;
  cin >> abcd;
  int a = abcd[0] - '0';
  int b = abcd[1] - '0';
  int c = abcd[2] - '0';
  int d = abcd[3] - '0';

  for (int i = 0; i < (1 << 3); i++) {
    vector<char> op = {'-', '-', '-'};
    for (int j = 0; j < 3; j++) {
      if ((1 << j) & i) { op[j] = '+'; }
    }
    int sum = 0;
    sum     = (op[0] == '+' ? a + b : a - b);
    sum     = (op[1] == '+' ? sum + c : sum - c);
    sum     = (op[2] == '+' ? sum + d : sum - d);
    if (sum == 7) {
      printf("%d%c%d%c%d%c%d=7\n", a, op[0], b, op[1], c, op[2], d);
      return 0;
    }
  }
}