//
// Created by Katie He on 1/20/25.
//
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;
set<int> changes = {};

// Function that finishes the process and adds the net change to a set, given the days spent already, the 2 vectors, and the net change
int milkProcess(int d, int change, vector<int>& barnAt, vector<int>& barnTo)
{
    if(d == 4)
    {
        changes.insert(change);
    }
    else
    {
        for(int i = 0; i < barnAt.size(); ++i)
        {
            int factor = ((d % 2 == 0) ? -1 : 1) * barnAt[i];
            change += factor;
            barnTo.push_back(barnAt[i]);
            barnAt.erase(barnAt.begin() + i);
            milkProcess(d + 1, change, barnTo, barnAt);
            change -= factor;
            barnAt.insert(barnAt.begin() + i, barnTo[barnTo.size() - 1]);
            barnTo.pop_back();
        }
    }
}

/*
int main()
{
    ifstream inFile("backforth.in");  // Open input file
    ofstream outFile("backforth.out"); // Open output file
    vector<int> barn1(10);
    vector<int> barn2(10);

    for(int i = 0; i < 10; ++i)
    {
        inFile >> barn1[i];
    }
    for(int i = 0; i < 10; ++i)
    {
        inFile >> barn2[i];
    }

    milkProcess(0, 0, barn1, barn2);
    for(int i : changes)
        cout << i << endl;
    outFile << changes.size();

    inFile.close();
    outFile.close();
    return 0;
}
*/