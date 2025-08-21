//
// Created by Katie He on 2/23/25.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

/*
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        vector<int> nums(m);
        for(int j = 0; j < m; ++j)
        {
            cin >> nums[j];
        }
        int start = -1;
        for(int j = 0; j < m - 1; ++j)
        {
            if(nums[j] < nums[j + 1])
            {
                start = j + 1;
                break;
            }
        }
        if(start == -1)
        {
            for(int j = 0; j < m - 1; ++j)
            {
                cout << nums[j] << " ";
            }
            cout << nums[m - 1] << endl;
            continue;
        }
        int max = nums[start];
        int movingIndex = start;
        for(int j = start + 1; j < m; ++j)
        {
            if(nums[j] >= max)
            {
                max = nums[j];
                movingIndex = j;
            }
        }
        // cout << "Max: " << max << endl;
        // cout << "Moving Index: " << movingIndex << endl;
        vector<int> better;
        int index = 0;
        while(nums[index] > max)
        {
            better.push_back(nums[index]);
            ++index;
        }
        better.push_back(max);
        for(int j = index; j < m; ++j)
        {
            if(j != movingIndex)
            {
                better.push_back(nums[j]);
            }
        }
        map<int, set<int>> k;
        for(int j = 0; j < m; ++j)
        {
            k[better[j]].insert(j);
        }
        //for(int i : better)
        //{
        //    cout << i << " ";
        //}
        //cout << endl;
        int maxIndex = -1;
        for(int j = m; j > 0; --j)
        {
            // cout << "Checking " << j << endl;
            if(k.count(j) != 0)
            {
                for(int x : k[j])
                {
                    if(x > maxIndex)
                    {
                        if(x == m - 1)
                        {
                            cout << j << endl;
                        }
                        else
                        {
                            cout << j << " ";
                        }
                        maxIndex = x;
                    }
                }
                if(maxIndex == m - 1)
                    break;
            }
        }
    }
}
 */