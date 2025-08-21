//
// Created by Katie He on 2/23/25.
//
#include <iostream>
using namespace std;

/*
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        bool yes = false;
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long count = 0;
        while(c >= a && d >= b)
        {
            if(a == c && d == b)
            {
                yes = true;
                break;
            }
            else if(c == d)
            {
                break;
            }
            else if(d > c)
            {
                long long add = d / c;
                long long next = d - (d / c) * c;
                if(b % c == d % c && b > next)
                {
                    count += (d - b) / c;
                    if(a == c)
                    {
                        yes = true;
                    }
                    break;
                }
                else
                {
                    d = next;
                    count += add;
                }
            }
            else if(c > d)
            {
                long long add = c / d;
                long long next = c - (c / d) * d;
                if(a % d == c % d && a > next)
                {
                    count += (c - a) / d;
                    if(b == d)
                    {
                        yes = true;
                    }
                    break;
                }
                else
                {
                    c = next;
                    count += add;
                }
            }
            // cout << c << " " << d << endl;
        }
        if(yes)
        {
            cout << count << endl;
        }
        else
            cout << "-1" << endl;
    }
}
 */