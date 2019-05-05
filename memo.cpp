#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int int32num = INT_MAX;
ll int64num  = LLONG_MAX;

// YES/NO
void yesorno() {
  // aa
  cout << (true ? "YES\n" : "NO\n");
}

// 10の9乗 + 7
int m = 1000000007;

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

// 総和
int n = num * (num + 1) / 2;

// 素因数分解
vector<int> decompositPrime(int num) {
  int a = 2;
  vector<int> arr;
  while (num >= a * a) {
    if (num % a == 0) {
      arr.push_back(a);
      num /= a;
    } else {
      a++;
    }
  }
  arr.push_back(num);
  // for (int i = 0; i < arr.size(); i++) {
  //  cout << arr[i] << " ";
  //}

  // cout << endl;
  return arr;
}

// 切り上げ
int num = ceil(10.0);
// 切り捨て(デフォルト)
int num = floor(10.0);
// 四捨五入
int num = round(10.0);
// 平方根
int num = sqrt(num);

void oomozi() {
  // 小文字 -> 大文字
  string str = "hoge";
  char(str[0] - ('a' - 'A'));
  // 大文字 -> 小文字
  string str2 = "HOGE";
  char(str2[0] - ('A' - 'a'));
}

// 文字列 全置換
void replace_all() {
  string s = "hoge,hoge";
  replace(s.begin(), s.end(), ',', ' ');
}

// 文字列 全置換
void replaceAll(string &str, string from, string to) {
  int pos = str.find(from);
  if (pos == -1) return;

  str.replace(pos, from.size(), to);
  replaceAll(str, from, to);
}

// 直方体
void tyokuhoutai() {
  // 体積
  int tate = 1, yoko = 1, oku = 1;
  cout << tate * yoko * oku;
  // 表面積
  cout << 2 * ((tate * yoko) + (yoko * oku) + (tate * oku));
}

// 浮動小数点の桁数指定の標準出力
void floatDouble() {
  double num = 1.0;
  cout << fixed << setprecision(7) << num * M_PI << endl;
}

// 10進数から2進数
string binaryStr(int bina) {
  string ans = "";
  for (int i = 0; bina > 0; i++) {
    ans  = ans + to_string(bina % 2);
    bina = bina / 2;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

// 2進数 文字列マッチ
void binaryMatch(int num) {
  string b  = binaryStr(num);
  string bi = binaryStr(num);
  if (b[b.size() - bi.size()] == '1') { cout << "match" << endl; }
}

// 10進数から2進数（整数）
int binary(int bina) {
  int ans = 0;
  for (int i = 0; bina > 0; i++) {
    ans  = ans + (bina % 2) * pow(10, i);
    bina = bina / 2;
  }
  return ans;
}
