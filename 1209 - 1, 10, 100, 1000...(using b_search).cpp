#include <bits/stdc++.h>

#define SIZE  65537
#define u_int unsigned int

using namespace std;

int b_search(u_int ara[], int l, int r, u_int k)
{
    if(l > r) return 0;
    int mid = l + (r - l) / 2;
    if(ara[mid] == k) return 1;
    if(ara[mid] < k) return b_search(ara, mid + 1, r, k);
    if(ara[mid] > k) return b_search(ara, l, mid - 1, k);
}
int main()
{
    int t;
    cin>>t;
    u_int ans[SIZE], k, i;
    for(i = 1; i < SIZE; i++) ans[i] = (i * (i - 1)) / 2 + 1;
    while(t--)
    {
        cin>>k;
        if(b_search(ans, 0, SIZE - 1, k)) cout<<"1 ";
        else cout<<"0 ";
    }
    return 0;
}
