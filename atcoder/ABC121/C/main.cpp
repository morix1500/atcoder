#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<pair<long int, long int>> AB(N);

    for (int i = 0; i < N; i++)
    {
        cin >> AB.at(i).first >> AB.at(i).second;
    }
    sort(AB.begin(), AB.end());

    long int res = 0;
    int m = M;
    for (int i = 0; i < N; i++)
    {
        if (AB.at(i).second >= m)
        {
            res += (AB.at(i).first * m);
            break;
        }
        else
        {
            m -= AB.at(i).second;
            res += (AB.at(i).first * AB.at(i).second);
        }
    }
    cout << res << endl;
}