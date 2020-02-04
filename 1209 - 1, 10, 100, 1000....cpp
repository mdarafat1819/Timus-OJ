#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int k, test;
    for(int i = 0; i < n; i++)
    {
        cin>>k;
        test = 1 + (sqrt(8 * k - 7)) / 2.0;
        if(k == (test * (test - 1)) / 2 + 1) cout<<"1 ";
        else cout<<"0 ";
    }
    return 0;
}
