#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> m;
  vector<int> p;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < 0) {
      m.push_back(a[i]);
    } else {
      p.push_back(a[i]);
    }
  }
  sort(m.begin(), m.end());
  sort(p.begin(), p.end());

  vector<pair<int, int>> ope;
  if (m.size() == 0) {
    // plus のみ
    int mn = p[0];
    for (int i = 1; i < p.size() - 1; i++) {
      mn = mn - p[i];
      ope.push_back(make_pair(mn, p[i]));
    }
    cout << p[p.size() - 1] - mn << endl;
    ope.push_back(make_pair(p[p.size() - 1], mn));
  } else if (p.size() == 0) {
    // minus のみ
    int mn = m[m.size() - 1];
    for (int i = m.size() - 2; i >= 1; i--) {
      mn = mn - m[i];
      ope.push_back(make_pair(mn, m[i]));
    }
    cout << mn - m[0] << endl;
    ope.push_back(make_pair(mn, m[0]));
  } else {
    // マイナス側もプラス側も一つ残す
    // ひとつ残るまでマイナスのあまりはプラスに
    // プラスのあまりはマイナスに
    int z = p[p.size() - 1];
    for (int i = 0; i < m.size() - 1; i++) {
      z = z - m[i];
      ope.push_back(make_pair(z, m[i]));
    }
  }

  for (int i = 0; i < ope.size(); i++) {
    cout << ope[i].first << " " << ope[i].second << endl;
  }
}