#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin>>ara[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i, k = 0; j >= 0; j--, k++)
            cout<<ara[j][k]<<" ";
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i, k = (n - 1); j < n; j++, k--)
            cout<<ara[k][j]<<" ";
    }

    return 0;
}
