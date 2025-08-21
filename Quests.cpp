//
// Created by Katie He on 3/16/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> points(2, vector<int>(n));
        for(int j = 0; j < n; ++j)
        {
            cin >> points[0][j];
        }
        for(int j = 0; j < n; ++j)
        {
            cin >> points[1][j];
        }
        int numQuests = 0;
        int partialSum = 0;
        int maxExtra = 0;
        int maxPoints = 0;
        while(numQuests < n && numQuests < k)
        {
            if(points[1][numQuests] > maxExtra)
                maxExtra = points[1][numQuests];
            partialSum += points[0][numQuests];
            if(partialSum + (k - numQuests - 1) * maxExtra > maxPoints)
                maxPoints = partialSum + (k - numQuests - 1) * maxExtra;
            ++numQuests;
        }
        cout << maxPoints << endl;
    }
}