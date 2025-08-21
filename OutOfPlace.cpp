//
// Created by Katie He on 3/7/25.
//

#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main()
{
    ifstream read("outofplace.in");
    ofstream write("outofplace.out");
    int n;
    read >> n;
    vector<int> final(n);
    vector<int> initial(n);
    for(int i = 0; i < n; ++i)
    {
        read >> initial[i];
        final[i] = initial[i];
    }
    sort(final.begin(), final.end());
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(initial[i] != final[i])
            ++count;
    }
    write << count - 1;
}
*/