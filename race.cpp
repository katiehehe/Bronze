//
// Created by Katie He on 3/8/25.
//

#include <fstream>
using namespace std;

/*
int main()
{
    int k, n;
    ifstream read("revegetate.in");
    ofstream write("revegetate.out");
    read >> k >> n;
    for(int i = 0; i < n; ++i)
    {
        int max;
        read >> max;
        int distance = 0;
        int count = 0;
        while(distance < k && count < max)
        {
            distance += count + 1;
            ++count;
        }
        if(distance >= k)
        {
            write << count << endl;
            continue;
        }
        // count = max now
        while(distance < k)
        {
            if(count % 2 == max % 2)
            {
                distance += max + (count - max) / 2;
                ++count;
            }
            else
            {
                distance += max + (count - max + 1) / 2;
                ++count;
            }
        }
        write << count << endl;
    }
}
*/