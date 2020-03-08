#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v = 1;
    cin>>n;
    int ara[n][n] = {0};
    for(int i = (n - 1); i >= 0; i--)
    {
        for(int j = i, k = 0; j < n; j++,k++, v++)
            ara[k][j] = v;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i, k = 0; j < n; j++,k++, v++)
            ara[j][k] = v;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", ara[i][j]);
        cout<<endl;
    }

    return 0;
}
