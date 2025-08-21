//
// Created by Katie He on 1/28/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> prod(n);
    for(long long i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(long long i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    for(long long i = 0; i < n; ++i)
    {
        prod[i] = (i + 1) * (n - i) * a[i];
    }
    sort(prod.begin(), prod.end());
    sort(b.begin(), b.end(), greater<long long>());
    long long sum = 0;
    for(long long i = 0; i < n; ++i)
    {
        sum += prod[i] * b[i];
    }
    cout << sum;
}
 */