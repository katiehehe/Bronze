//
// Created by Katie He on 2/23/25.
//

#include <fstream>
#include <unordered_map>
#include <iostream>
using namespace std;

/*
int main()
{
    ifstream inFile("notlast.in");
    ofstream outFile("notlast.out");
    int n;
    inFile >> n;
    unordered_map<string, int> cows;

    for(int i = 0; i < n; ++i)
    {
        string s;
        int m;
        inFile >> s >> m;
        cows[s] += m;
    }
    unordered_map<int, string> check;
    check.insert({0, "Bessie"});
    check.insert({1, "Elsie"});
    check.insert({2, "Daisy"});
    check.insert({3, "Gertie"});
    check.insert({4, "Annabelle"});
    check.insert({5, "Maggie"});
    check.insert({6, "Henrietta"});
    for(int i = 0; i < 7; ++i)
    {
        if(cows.count(check[i]) == 0)
        {
            cows[check[i]] = 0;
        }
    }

    int min = 10000;
    for(auto x : cows)
    {
        if(x.second < min)
            min = x.second;
    }
    string second;
    int minDiff = 10000;
    int secondCount = 0;
    for(auto x : cows)
    {
        if(x.second - min != 0 && x.second - min < minDiff)
        {
            minDiff = x.second - min;
            second = x.first;
        }
    }
    for(auto x : cows)
    {
        if(x.second - min == minDiff)
            ++secondCount;
    }
    if(secondCount > 1 || secondCount == 0)
        outFile << "Tie";
    else
        outFile << second;
}
 */