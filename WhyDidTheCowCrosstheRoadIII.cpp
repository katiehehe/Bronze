#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main()
{

    ifstream inFile("cowqueue.in");  // Open input file
    ofstream outFile("cowqueue.out"); // Open output file

    int n;
    inFile >> n;
    inFile.ignore();
    vector<vector<int>> cows(n, vector<int>(2));

    for(int i = 0; i < n; ++i)
    {
        inFile >> cows[i][0] >> cows[i][1];
    }
    sort(cows.begin(), cows.end(), [](const vector<int>& a, const vector<int>& b)
    {
        return a[0] < b[0];
    });
    int time = 0;
    for(int i = 0; i < n; ++i)
    {
        if(cows[i][0] >= time)
            time = cows[i][0] + cows[i][1];
        else
            time += cows[i][1];
    }
    outFile << time;

    inFile.close();
    outFile.close();
    return 0;
}
*/

