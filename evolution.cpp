//
// Created by Katie He on 3/15/25.
//

#include <fstream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    ifstream read("evolution.in");
    ofstream write("evolution.out");

    int n;
    read >> n;

    vector<unordered_set<string>> cows(n);
    unordered_set<string> total;
    for(int i = 0; i < n; ++i)
    {
        int x;
        read >> x;
        for(int j = 0; j < x; ++j)
        {
            string trait;
            read >> trait;
            total.insert(trait);
            cows[i].insert(trait);
        }
    }
    vector<int> bools(total.size());
    int index = 0;
    for(string s : total)
    {
        int num = 0;
        int power = 0;
        for(int i = 0; i < n; ++i)
        {
            if(cows[i].find(s) != cows[i].end())
                num += static_cast<int>(pow(2, power));
            ++power;
        }
        bools[index] = num;
        ++index;
    }
    //for(int i : bools)
        //write << i << endl;
    for(int i = 0; i < total.size(); ++i)
    {
        for(int j = i + 1; j < total.size(); ++j)
        {
            //write << bools[i] << " " << bools[j] << " " << (bools[i] & bools[j]) << endl;
            if((bools[i] & bools[j]) == 0 || (bools[i] & bools[j]) == bools[i] || (bools[i] & bools[j]) == bools[j])
                continue;
            write << "no" << endl;
            return 0;
        }
    }
    write << "yes" << endl;
    return 0;
}