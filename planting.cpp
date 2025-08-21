//
// Created by Katie He on 3/9/25.
//

#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

/*
int main()
{
    int n;
    ifstream read("revegetate.in");
    ofstream write("revegetate.out");
    read >> n;
    vector<vector<int>> graph(n);
    for(int i = 0; i < n - 1; ++i)
    {
        int a, b;
        read >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    int max1 = 0;
    for(vector<int> v : graph)
    {
        max1 = max(max1, static_cast<int>(v.size()));
    }
    write << max1 + 1;
}
 */