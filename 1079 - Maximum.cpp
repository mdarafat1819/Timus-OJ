#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n, mx = 0;
        cin>>n;
        if(n == 0) break;
        int a[n + 1];
        a[0] = 0;
        a[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            if(i % 2) a[i] = a[i/2] + a[i/2 + 1];
            else a[i] = a[i/2];
        }
        mx = a[0];
        for(int i = 0; i <= n; i++)
            mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
    return 0;
}
