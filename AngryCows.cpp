//
// Created by Katie He on 1/27/25.
//
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*
int main()
{
    freopen("angry.in", "r", stdin);
    int n;
    cin >> n;
    vector<int> pos(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> pos[i];
    }
    sort(pos.begin(), pos.end());
    int max1 = 0;
    for(int i = 0; i < n; ++i)
    {
        int blow = 1;
        int dist = 1;
        int k = i;
        while((k + 1 < n) && (pos[k + 1] - pos[k] <= dist))
        {
            int nextPos = k;
            while((nextPos + 1 < n) && (pos[nextPos + 1] - pos[k] <= dist))
            {
                ++nextPos;
                ++blow;
            }
            ++dist;
            k = nextPos;
        }
        k = i;
        dist = 1;
        while((k - 1 >= 0) && (pos[k] - pos[k - 1] <= dist))
        {
            int nextPos = k;
            while((nextPos > 0) && (pos[k] - pos[nextPos - 1] <= dist))
            {
                --nextPos;
                ++blow;
            }
            ++dist;
            k = nextPos;
        }
        max1 = max(max1, blow);
    }

    freopen("angry.out", "w", stdout);
    cout << max1;
}
 */