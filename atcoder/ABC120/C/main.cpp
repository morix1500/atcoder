#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    string S;
    cin >> S;

    int m = S.size() / 2;
    int s = m;
    int e = m;
    int res = 0;

    while (true)
    {
        if (m == 0 || (s <= 0 && e >= S.size() - 1))
            break;

        if (s > 0)
        {
            if (S.at(s) != S.at(s - 1))
            {
                S.erase(s - 1, 2);
                res += 2;
                m = S.size() / 2;
                s = m;
                e = m;
                continue;
            }
        }
        if (e < S.size() - 1)
        {
            if (S.at(e) != S.at(e + 1))
            {
                S.erase(e, 2);
                res += 2;
                m = S.size() / 2;
                s = m;
                e = m;
                continue;
            }
        }
        s--;
        e++;
    }
    cout << res << endl;
}