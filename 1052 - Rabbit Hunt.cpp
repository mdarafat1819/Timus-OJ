#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

struct pair_data
{
    int x, y;
};

typedef pair_data pd;

void merge_sort(pd ara[], int l, int r)
{
    if(l >= r) return;
    int mid = l + (r - l) / 2;
    merge_sort(ara, l, mid);
    merge_sort(ara, mid + 1, r);
    pd temp[r - l + 1];
    int i = l, j = mid + 1, k = 0;
    while((i <= mid) && (j <= r))
    {
        if((ara[i].x <= ara[j].x) && (ara[i].y <= ara[j].y)) temp[k++] = ara[i++];
        else temp[k++] = ara[j++];
    }
    while(i <= mid) temp[k++] = ara[i++];
    while(j <= r) temp[k++] = ara[j++];
    for(i = l, k = 0; i <= r; i++, k++) ara[i] = temp[k];
}

int main()
{
    int n, idx = 0, mx = 0, cnt;
    cin>>n;
    pd p[200], s[200];
    for(int i = 0; i < n; i++) cin>>p[i].x>>p[i].y;
    for(int i = 0; i < n; i++)
    {
        idx = 0, cnt = 2;
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            int x = p[i].x - p[j].x;
            int y = p[i].y - p[j].y;
            int g = gcd(abs(x), abs(y));
            s[idx].x = x / g;
            s[idx].y = y / g;
            idx++;
        }
        merge_sort(s, 0, idx - 1);
        for(int k = 1; k < idx; k++)
        {
            if((s[k].x == s[k-1].x) && (s[k].y == s[k-1].y)) cnt++;
            else mx = max(cnt, mx), cnt = 2;
        }
        mx = max(cnt, mx);
    }
    cout<<mx<<endl;
    return 0;
}
