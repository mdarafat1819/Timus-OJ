#include <iostream>
#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

double distance(double x[], double y[], int n)
{
    double res = 0;
    for(int i = 0; i < n; i++)
    {
        double dx = x[i] - x[(i + 1) % n];
        double dy = y[i] - y[(i + 1) % n];
        res += sqrt((dx * dx + dy * dy));
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    double x[n], y[n], r;
    cin>>r;
    for(int i = 0; i < n; i++) cin>>x[i]>>y[i];
    printf("%.2lf\n", distance(x, y, n) + 2 * PI * r);

    return 0;
}
