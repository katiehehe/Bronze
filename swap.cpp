//
// Created by Katie He on 3/9/25.
//

#include <fstream>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
int main()
{
    ifstream read("swap.in");
    ofstream write("swap.out");
    int n;
    long long k;
    read >> n >> k;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 0);
    int a1, a2, b1, b2;
    read >> a1 >> a2 >> b1 >> b2;
    --a1; --a2; --b1; --b2;
    reverse(nums.begin() + a1, nums.begin() + a2 + 1);
    reverse(nums.begin() + b1, nums.begin() + b2 + 1);
    unordered_map<int, int> currPerm;
    for(int i = 0; i < n; ++i)
    {
        currPerm[i] = i;
    }
    unordered_map<int, int> doubling;
    for(int i = 0; i < n; ++i)
    {
        doubling[i] = distance(nums.begin(), find(nums.begin(), nums.end(), i));
    }
    while(k != 0)
    {
        if(k % 2 == 1)
        {
            vector<int> newPerm(n);
            for(int i = 0; i < n; ++i)
            {
                newPerm[i] = doubling[currPerm[i]];
            }
            for(int i = 0; i < n; ++i)
            {
                currPerm[i] = newPerm[i];
            }
        }
        vector<int> doubledPerm(n);
        for(int i = 0; i < n; ++i)
        {
            doubledPerm[i] = doubling[doubling[i]];
        }
        for(int i = 0; i < n; ++i)
        {
            doubling[i] = doubledPerm[i];
        }
        //for(int i : doubledPerm)
            //write << i << " ";
        // write << endl;
        k = k / 2;
    }
    vector<int> final(n);
    for(int i = 0; i < n; ++i)
    {
        final[currPerm[i]] = i + 1;
    }
    for(int i = 0; i < n; ++i)
    {
        write << final[i] << endl;
    }
}
 */