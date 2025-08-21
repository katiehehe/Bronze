//
// Created by Katie He on 3/9/25.
//

#include <fstream>
#include <vector>
using namespace std;

void findReachable(int node, vector<int>& update, vector<vector<int>>& adj)
{
    update.push_back(node);
    for(int i : adj[node])
    {
        findReachable(i, update, adj);
    }
}

/*
int main()
{
    ifstream read("factory.in");
    ofstream write("factory.out");
    int n;
    read >> n;
    vector<vector<int>> adj(n);
    for(int i = 0; i < n - 1; ++i)
    {
        int first, second;
        read >> first >> second;
        adj[second - 1].push_back(first - 1);
    }

    for(int i = 0; i < n; ++i)
    {
        vector<int> reachableNodes;
        findReachable(i, reachableNodes, adj);
        if(reachableNodes.size() == n)
        {
            write << i + 1 << endl;
            return 0;
        }
    }
    write << -1 << endl;
    return 0;
}
 */