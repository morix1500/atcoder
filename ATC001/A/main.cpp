#include <bits/stdc++.h>
using namespace std;

int search(vector<string> &vec, vector<vector<int>> &memo, int i, int j)
{
    if (vec.at(i).at(j) == '#')
    {
        return 0;
    }
    else if (vec.at(i).at(j) == 'g')
    {
        return 1;
    }

    if (memo.at(i).at(j) == 1)
    {
        return 0;
    }
    else
    {
        memo.at(i).at(j) = 1;
    }

    int ret = 0;
    if (i != 0)
    {
        ret = search(vec, memo, i - 1, j);
        if (ret == 1)
            return ret;
    }
    if (i != vec.size() - 1)
    {
        ret = search(vec, memo, i + 1, j);
        if (ret == 1)
            return ret;
    }
    if (j != 0)
    {
        ret = search(vec, memo, i, j - 1);
        if (ret == 1)
            return ret;
    }
    if (j != vec.at(i).size() - 1)
    {
        ret = search(vec, memo, i, j + 1);
        if (ret == 1)
            return ret;
    }

    return ret;
}

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> C(H);
    vector<vector<int>> memo(H, vector<int>(W));
    int s = -1;
    int e = -1;
    for (int i = 0; i < H; i++)
    {
        cin >> C.at(i);
        if (s == -1 && e == -1)
        {
            for (int j = 0; j < W; j++)
            {
                if (C.at(i).at(j) == 's')
                {
                    s = i;
                    e = j;
                    break;
                }
            }
        }
    }

    int ret = search(C, memo, s, e);
    if (ret == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}