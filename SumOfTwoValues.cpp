//
// Created by Katie He on 2/22/25.
//

#include <iostream>
#include <set>
#include <map>
using namespace std;

/*
int main()
{
    int n, sum;
    cin >> n;
    cin >> sum;
    bool found = false;
    map<int, set<int>> m;
    for(int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        m[k].insert(i);
    }
    for(auto x : m)
    {
        if(found)
            break;
        if(m.count(sum - x.first) == 1)
        {
            for(int j : m[sum - x.first])
            {
                if(found)
                    break;
                for(int k : x.second)
                {
                    if(!found && j != k)
                    {
                        cout << (j + 1) << " " << (k + 1);
                        found = true;
                        break;
                    }
                }
            }
        }
    }
    if(!found)
        cout << "IMPOSSIBLE";
    return 0;
}
 */