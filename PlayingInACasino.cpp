//
// Created by Katie He on 1/26/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> cards(n, vector<int>(m, 0));
        long long total = 0;
        for(int j = 0; j < n; ++j)
        {
            for(int k = 0; k < m; ++k)
            {
                cin >> cards[j][k];
            }
        }
        for(int k = 0; k < m; ++k)
        {
            sort(cards.begin(), cards.end(), [k](const vector<int>& a, const vector<int>& b)
            {
                return a[k] < b[k];
            });
            for(int l = n / 2; l < n; ++l)
            {
                total += ((static_cast<long long>(cards[l][k]) - static_cast<long long>(cards[n - 1 - l][k])) * static_cast<long long>(2 * l - n + 1));
            }
        }
        cout << total << endl;
    }
}
 */