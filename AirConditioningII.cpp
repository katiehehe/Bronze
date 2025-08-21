#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int M;

vector<vector<int>> complete;
vector<int> currSubset;
void subSets(int n)
{
    if(n == M)
    {
        complete.push_back(currSubset);
    }
    else
    {
        subSets(n+1);
        currSubset.push_back(n);
        subSets(n+1);
        currSubset.pop_back();
    }
}

/*
int main()
{
    int N;
    cin >> N >> M;

    vector<int> cows(100);
    vector<vector<int>> airConditioners(M, vector<int>(4));
    vector<int> order(M);
    iota(order.begin(), order.end(), 0);

    for(int i = 0; i < N; ++i)
    {
        int s, t, c;
        cin >> s >> t >> c;
        for(int j = s; j <= t; ++j)
        {
            cows[j - 1] += c;
        }
    }
    for (int i = 0; i < M; i++)
    {
        cin >> airConditioners[i][0] >> airConditioners[i][1] >> airConditioners[i][2] >> airConditioners[i][3];
    }

    int minCost = 2147483647;
    subSets(0);
    for(vector<int> x : complete)
    {
        int cost = 0;
        bool good = true;
        for(int k : x)
        {
            for(int j = airConditioners[k][0] - 1; j <= airConditioners[k][1] - 1; ++j)
            {
                cows[j] -= airConditioners[k][2];
            }
            cost += airConditioners[k][3];
        }
        for(int i = 0; i < 100; ++i)
        {
            if(cows[i] > 0)
            {
                good = false;
                break;
            }
        }
        for(int k : x)
        {
            for(int j = airConditioners[k][0] - 1; j <= airConditioners[k][1] - 1; ++j)
            {
                cows[j] += airConditioners[k][2];
            }
        }
        if(good)
        {
            minCost = min(cost, minCost);
        }
    }
    cout << minCost;
}
 */