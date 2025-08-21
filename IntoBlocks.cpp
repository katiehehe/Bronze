//
// Created by Katie He on 2/24/25.
//

#include <iostream>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

/*
int main()
{
    int n, q;
    cin >> n >> q;
    unordered_map<int, set<int>> indices;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        indices[x].insert(i);
        nums[i] = x;
    }
    int count = 0;
    int blockStart = 0;
    while(blockStart < n)
    {
        //cout << "Block Start : " << blockStart << endl;
        int maxFreq = 1;
        int mover = blockStart;
        int blockFinish = *indices[nums[blockStart]].rbegin();
        //cout << "Block Finish Temporary: " << blockFinish << endl;
        while(mover < blockFinish)
        {
            blockFinish = max(blockFinish, *indices[nums[mover]].rbegin());
            maxFreq = max(maxFreq, static_cast<int>(indices[nums[mover]].size()));
            ++mover;
        }
        //cout << "Final Block Finish: " << blockFinish << endl;
        count += blockFinish - blockStart + 1 - maxFreq;
        //cout << "Count: " << count << endl;
        blockStart = blockFinish + 1;
    }
    cout << count;
}
*/