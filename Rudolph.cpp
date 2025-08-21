//
// Created by Katie He on 3/16/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        long long n, d, h;
        cin >> n >> d >> h;
        long long low, high; // big numbers
        cin >> high;
        long double area = 1.0L * d * h * n / 2; // fixed
        long long overlap = 0;
        for(int j = 0; j < n - 1; ++j)
        {
            low = high;
            cin >> high;
            if(high - low < h)
            {
                overlap += (h - high + low) * (h - high + low);
            }
        }
        area -= (static_cast<long double>(overlap) * d) / (2.0L * h); // fixed
        cout << fixed << setprecision(20) << area << endl;
    }
}