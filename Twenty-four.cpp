//
// Created by Katie He on 1/20/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;

set<int> combine(set<int> set1, set<int> set2)
{
    set<int> pos = {};
    for(int i : set1)
    {
        for(int j : set2)
        {
            pos.insert(i + j);
            pos.insert(i - j);
            pos.insert(i * j);
            if(j != 0 && i % j == 0)
                pos.insert(i / j);
        }
    }
    return pos;
}

set<int> possibilities(vector<int> nums)
{
    set<int> total = {};
    if(nums.size() == 1)
    {
        set<int> set = {nums[0]};
        return set;
    }
    else
    {
        for(int i = 1; i < (int)nums.size(); ++i)
        {
            vector<int> a(nums.begin(), nums.begin() + i);
            vector<int> b(nums.begin() + i, nums.end());
            set<int> tempPossible = combine(possibilities(a), possibilities(b));
            for(int j : tempPossible)
                total.insert(j);
        }
    }
    return total;
}

/*
int main()
{
    int n;
    vector<int> out;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        set<int> totalFinal = {};
        vector<int> cards(4);
        cin >> cards[0] >> cards[1] >> cards[2] >> cards[3];
        sort(cards.begin(), cards.end());
        do
        {
            vector<int> thisOne = cards;
            set<int> achieve = possibilities(cards);
            totalFinal.insert(achieve.begin(), achieve.end());
        } while(next_permutation(cards.begin(), cards.end()));
        int maxUnder = INT_MIN;
        for(int j : totalFinal)
        {
            if(j <= 24 && j > maxUnder)
                maxUnder = j;
        }
        out.push_back(maxUnder);
    }
    for(int i : out)
        cout << i << endl;
    return 0;
}
 */