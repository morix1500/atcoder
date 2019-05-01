#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int int32num = (1 << 21);
ll int64num  = (1LL << 60);

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

// 素数判定
bool isPrime(int num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false;

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) { return false; }
  }

  return true;
}

// エラトステネスのふるい
vector<int> eratosthenes() {
  int MAX = 101010;
  vector<int> is_prime(MAX, 1);
  is_prime[0] = 0;
  is_prime[1] = 0;
  for (int i = 2; i < MAX; i++) {
    if (!is_prime[i]) continue;
    for (int j = i * 2; j < MAX; j += i)
      is_prime[j] = 0;
  }
  return is_prime;
}

// 階乗
int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

// 順列 permutation: falseなら組み合わせ
int combination(int n, int r, bool permutation) {
  if (n <= 1) return n;
  int p   = factorial(n) / factorial(n - r);
  int res = p;
  if (!permutation) { res /= factorial(r); }
  return res;
}

// 組み合わせ(2通り選ぶ場合)
int num = 3;
int n   = num * (num - 1) / 2;
