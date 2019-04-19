#include <bits/stdc++.h>
using namespace std;
static const int MAX = 1000;
static const int VMAX = 10000;

int n, s, B[MAX];
vector<int> A(MAX), T(VMAX + 1);

int solve()
{
    int ans = 0;

    vector<bool> V(MAX);
    for (int i = 0; i < n; i++)
    {
        B[i] = A.at(i);
        V.at(i) = false;
    }
    sort(B, B + n);
    for (int i = 0; i < n; i++)
        T.at(B[i]) = i;
    for (int i = 0; i < n; i++)
    {
        if (V.at(i))
            continue;
        int cur = i;
        int S = 0;
        int m = VMAX;
        int an = 0;
        while (true)
        {
            V.at(cur) = true;
            an++;
            int v = A.at(cur);
            m = min(m, v);
            S += v;
            cur = T.at(v);
            if (V.at(cur))
                break;
        }
        ans += min(S + (an - 2) * m, m + S + (an + 1) * s);
    }
    return ans;
}

int main()
{
    cin >> n;
    s = VMAX;
    for (int i = 0; i < n; i++)
    {
        cin >> A.at(i);
        s = min(s, A.at(i));
    }
    int ans = solve();
    cout << ans << endl;
}

/*
first: 1 5 3 4 2
       1 2 3 4 5
2と5を交換 = 7
15 + 3 * 1

first : 1 8 7 3 2 6 4 5 9
        1 2 3 4 5 6 7 8 9
        x         x     x

first: 4 3 2 7 1 6 5
       1 2 3 4 5 6 7

       7 3 2 4 1 6 5 = 7+4 = 11
       5 3 2 4 1 6 7 = 7+5 = 12
       1 3 2 4 5 6 7 = 1+5 = 6
       1 2 3 4 5 6 7 = 3+2 = 5
       
5
1 5 3 4 2

*/