#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, result[37] = {0}, last, ans = 0;
    cin>>n;
    last = pow(10.0, n / 2) - 1;
    for(int i = 0; i <= last; i++)
        result[digitSum(i)]++;
    for(int i = 0; i <= digitSum(last); i++)
        ans += (result[i] * result[i]);
    cout<<ans<<endl;

    return 0;
}
