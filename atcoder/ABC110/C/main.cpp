#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    map<char, char> r;
    map<char, char> r2;

    for (int i = 0; i < s.size(); i++)
    {
        if (r.count(s[i]))
        {
            if (r[s[i]] != t[i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        if (r2.count(t[i]))
        {
            if (r2[t[i]] != s[i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        r[s[i]] = t[i];
        r2[t[i]] = s[i];
    }
    cout << "Yes" << endl;
}