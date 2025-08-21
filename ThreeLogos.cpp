//
// Created by Katie He on 1/21/25.
//
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
int main()
{
    vector<vector<int>> logos(3, vector<int>(2, 0));
    int sum = 0;
    for(int i = 0; i < 3; ++i)
    {
        int a, b;
        cin >> a >> b;
        logos[i][0] = min(a, b);
        logos[i][1] = max(a, b);
        sum = sum + a * b;
    }
    int dim = static_cast<int>(sqrt(sum));
    if(dim * dim != sum)
    {
        cout << "-1";
    }
    else
    {
        int numDim = 0;
        for(int i = 0; i < 3; ++i)
        {
            if(logos[i][1] == dim)
                ++numDim;
        }
        if(numDim == 3 && (logos[0][0] + logos[1][0] + logos[2][0] == dim))
        {
            cout << dim << endl;
            for(int i = 0; i < logos[0][0]; ++i)
            {
                for(int j = 0; j < dim; ++j)
                {
                    cout << "A";
                }
                cout << endl;
            }
            for(int i = 0; i < logos[1][0]; ++i)
            {
                for(int j = 0; j < dim; ++j)
                {
                    cout << "B";
                }
                cout << endl;
            }
            for(int i = 0; i < logos[2][0]; ++i)
            {
                for(int j = 0; j < dim; ++j)
                {
                    cout << "C";
                }
                cout << endl;
            }
        }
        else if(numDim == 1)
        {
            int sideLogo = 0; // index of the logo that will be on the side
            int remDim; // remaining dimension after placing the side logo
            for(int i = 0; i < 3; ++i)
            {
                if(logos[i][1] == dim)
                {
                    sideLogo = i;
                    remDim = dim - logos[i][0];
                    break;
                }
            }
            logos.erase(logos.begin() + sideLogo); // remove the side logo from the vector
            int sumOtherTwo = 0; // Sum of other 2 logo dimensions not equal to remDim
            int numOtherTwo = 0; // Num of logos with side length remDim
            vector<int> otherTwo;
            for(int i = 0; i < 2; ++i)
            {
                if(logos[i][0] == remDim)
                {
                    sumOtherTwo += logos[i][1];
                    otherTwo.push_back(logos[i][1]);
                    numOtherTwo += 1;
                }
                else if(logos[i][1] == remDim)
                {
                    sumOtherTwo += logos[i][0];
                    otherTwo.push_back(logos[i][0]);
                    numOtherTwo += 1;
                }
            }
            if(numOtherTwo == 2 && sumOtherTwo == dim)
            {
                cout << dim << endl;
                for(int i = 0; i < dim - remDim; ++i)
                {
                    for(int j = 0; j < dim; ++j)
                    {
                        if(sideLogo == 0)
                        {
                            cout << "A";
                        }
                        else if(sideLogo == 1)
                        {
                            cout << "B";
                        }
                        else if(sideLogo == 2)
                        {
                            cout << "C";
                        }
                    }
                    cout << endl;
                }
                for(int i = 0; i < remDim; ++i)
                {
                    if(sideLogo == 0)
                    {
                        for(int j = 0; j < otherTwo[0]; ++j)
                            cout << "B";
                        for(int j = 0; j < otherTwo[1]; ++j)
                            cout << "C";
                        cout << endl;
                    }
                    else if(sideLogo == 1)
                    {
                        for(int j = 0; j < otherTwo[0]; ++j)
                            cout << "A";
                        for(int j = 0; j < otherTwo[1]; ++j)
                            cout << "C";
                        cout << endl;
                    }
                    else if(sideLogo == 2)
                    {
                        for(int j = 0; j < otherTwo[0]; ++j)
                            cout << "A";
                        for(int j = 0; j < otherTwo[1]; ++j)
                            cout << "B";
                        cout << endl;
                    }
                }
            }
            else
                cout << "-1";
        }
        else
        {
            cout << "-1";
        }
    }
    return 0;
}
 */