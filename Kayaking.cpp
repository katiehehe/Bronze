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
    int n;
    cin >> n;
    vector<int> ppl(2 * n);
    for(int i = 0; i < 2 * n; ++i)
    {
        cin >> ppl[i];
    }
    sort(ppl.begin(), ppl.end());
    int min1 = 100000;
    for(int i = 0; i < 2 * n; ++i)
    {
        for(int j = i + 1; j < 2 * n; ++j)
        {
            int alt = -1;
            int sum = 0;
            for(int k = 0; k < 2 * n; ++k)
            {
                if(k == i || k == j)
                    continue;
                sum += ppl[k] * alt;
                alt *= -1;
            }
            min1 = min(min1, sum);
        }
    }
    cout << min1;
}
 */