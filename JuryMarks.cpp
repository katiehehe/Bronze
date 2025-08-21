//
// Created by Katie He on 2/24/25.
//

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

/*
int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> partial(k);
    cin >> partial[0];
    for(int i = 1; i < k; ++i)
    {
        int x;
        cin >> x;
        partial[i] = x + partial[i - 1];
    }
    unordered_set<int> part(partial.begin(), partial.end());
    unordered_set<int> scores;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        scores.insert(x);
    }
    unordered_set<int> possible;
    for(int score : scores)
    {
        for(int p : part)
        {
            bool works = true;
            int begin = score - p;
            if(possible.find(begin) != possible.end())
                break;
            for(int otherScores : scores)
            {
                if(!part.count(otherScores - begin))
                {
                    works = false;
                    break;
                }
            }
            if(works)
                possible.insert(begin);
        }
    }
    cout << possible.size();
}
 */