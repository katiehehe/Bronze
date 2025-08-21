#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/*
int main()
{

    ifstream inFile("backforth.in");  // Open input file
    ofstream outFile("lineup.out"); // Open output file


    if (!inFile.is_open()) {
        cerr << "Error opening the input file!" << endl;
        return 1;  // Return with error code
    }


    int n;
    inFile >> n;
    inFile.ignore();

    vector<string> order = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
    vector<pair<string, string>> pairs;


    for(int i = 0; i < n; ++i)
    {
        string line;
        string word;
        getline(inFile, line);
        stringstream ss(line);
        vector<string> words;
        while(ss >> word)
        {
            words.push_back(word);
        }
        pairs.emplace_back(words[0], words[5]);
    }


    do
    {
        bool good = true;
        for(pair x : pairs)
        {
            if(abs(find(order.begin(), order.end(), x.first) - find(order.begin(), order.end(), x.second)) != 1)
            {
                good = false;
            }
        }
        if (good)
        {
            for (string s: order)
                outFile << s << endl;
            break;
        }
    }
    while(next_permutation(order.begin(), order.end()));

    inFile.close();
    outFile.close();
    return 0;
}
 */

