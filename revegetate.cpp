//
// Created by Katie He on 3/9/25.
//

#include <fstream>
#include <vector>
#include <set>
using namespace std;

/*
int main()
{
    ifstream read("revegetate.in");
    ofstream write("revegetate.out");
    string s = "";
    int n, m;
    read >> n >> m;
    vector<vector<int>> graph(n);
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        read >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    vector<set<int>> colors(n);
    for(int i = 0; i < n; ++i)
    {
        int minColor = 1;
        while(colors[i].find(minColor) != colors[i].end())
        {
            ++minColor;
        }
        for(int x : graph[i])
        {
            colors[x].insert(minColor);
        }
        s.append(to_string(minColor));
    }
    write << s;
}
*/