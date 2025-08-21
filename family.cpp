//
// Created by Katie He on 3/15/25.
//

#include <unordered_map>
#include <fstream>
#include <set>
using namespace std;

void addPositions(string& first, int upDist, int downDist, unordered_map<string, pair<int, int>>& modify, unordered_map<string, string>& up, unordered_map<string, set<string>>& down, ofstream& k)
{
    //k << first << " " << upDist << " " << downDist << endl;
    modify[first] = {upDist, downDist};
    if(down.find(first) != down.end())
    {
        set<string> children = down[first];
        for(string s : children)
        {
            if(modify.find(s) == modify.end())
            {
                addPositions(s, upDist, downDist + 1, modify, up, down, k);
            }
        }
    }
    if(up.find(first) != up.end())
    {
        string parent = up[first];
        if(modify.find(parent) == modify.end())
        {
            addPositions(parent, upDist + 1, downDist, modify, up, down, k);
        }
    }
}

int main()
{
    ifstream read("family.in");
    ofstream write("family.out");

    int n;
    read >> n;
    string first, second;
    read >> first >> second;
    unordered_map<string, set<string>> down;
    unordered_map<string, string> up;
    unordered_map<string, pair<int, int>> relations;
    for(int i = 0; i < n; ++i)
    {
        string mother, child;
        read >> mother >> child;
        down[mother].insert(child);
        up[child] = mother;
    }
    addPositions(first, 0, 0, relations, up, down, write);
    if(relations.find(second) == relations.end())
    {
        write << "NOT RELATED" << endl;
        return 0;
    }
    int a = relations[second].first;
    int b = relations[second].second;
    if(a == 1 && b == 1)
    {
        write << "SIBLINGS" << endl;
        return 0;
    }
    if(a == 0)
    {
        string s;
        while(b > 0)
        {
            if(b == 1)
            {
                s += "mother";
            }
            else if(b == 2)
            {
                s += "grand-";
            }
            else
            {
                s += "great-";
            }
            --b;
        }
        write << first << " is the " << s << " of " << second << endl;
        return 0;
    }
    if(b == 0)
    {
        string s;
        while(a > 0)
        {
            if(a == 1)
            {
                s += "mother";
            }
            else if(a == 2)
            {
                s += "grand-";
            }
            else
            {
                s += "great-";
            }
            --a;
        }
        write << second << " is the " << s << " of " << first << endl;
        return 0;
    }
    if(b == 1)
    {
        string temp = first;
        first = second;
        second = temp;
        b = a;
        a = 1;
    }
    if(a == 1)
    {
        string s = "";
        while(b > 1)
        {
            if(b == 2)
                s += "aunt";
            else
                s += "great-";
            --b;
        }
        write << first << " is the " << s << " of " << second << endl;
        return 0;
    }
    write << "COUSINS" << endl;
    return 0;
}