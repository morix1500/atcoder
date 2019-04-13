#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll N, K;
    string S;

    cin >> N >> K >> S;

    vector<ll> one;
    vector<ll> zero;

    char pre = S.at(0);
    ll cnt = 0;
    bool z = false;
    if (pre == '0')
        z = true;

    for (ll i = 0; i < N; i++)
    {
        if (pre == S.at(i))
        {
            cnt++;
        }
        else
        {
            if (z)
            {

                zero.push_back(cnt);
            }
            else
            {
                one.push_back(cnt);
            }
            pre = S.at(i);
            cnt = 1;
            z = !z;
        }
    }
    if (cnt > 0)
    {
        if (z)
            zero.push_back(cnt);
        else
            one.push_back(cnt);
    }

    ll oSize = one.size();
    ll zSize = zero.size();

    if (S.at(0) == '0')
    {
        vector<ll> tmp;
        tmp.push_back(0);
        for (ll i = 0; i < oSize; i++)
        {
            tmp.push_back(one.at(i));
        }
        one = tmp;
        oSize++;
    }

    ll max = 1;
    for (ll i = 0; i < zSize; i++)
    {
        ll tmp = 0;
        ll tmp2 = 0;
        for (ll k = 0; k < K; k++)
        {
            if (i + k < zSize)
            {
                tmp += zero[i + k];
            }
            if (k == 0 && i + k < oSize)
            {
                tmp2 += one[i + k];
            }

            if (i + k + 1 < oSize)
            {
                tmp2 += one[i + k + 1];
            }
        }
        if (max < (tmp + tmp2))
        {
            max = tmp + tmp2;
        }
    }

    if (zSize == 0 && oSize > 0)
    {
        max = N;
    }
    cout << max << endl;
}