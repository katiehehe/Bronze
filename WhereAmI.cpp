//
// Created by Katie He on 2/23/25.
//

#include <iostream>
#include <set>
#include <fstream>
using namespace std;

/*
int main()
{
    ifstream inFile("whereami.in");  // Open input file
    ofstream outFile("whereami.out"); // Open output file
    int n;
    inFile >> n;
    string s;
    inFile >> s;
    for(int i = 0; i < n; ++i)
    {
        set<string> x;
        for(int j = 0; j < n - i; ++j)
        {
            if(x.count(s.substr(j, i + 1)) == 1)
            {
                break;
            }
            x.insert(s.substr(j, i + 1));
        }
        if(x.size() == n - i)
        {
            outFile << (i + 1);
            return 0;
        }
    }
}
 */