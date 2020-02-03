#include <iostream>

using namespace std;

int main()
{
    int n, k;
    string ex;
    cin>>n>>ex;
    k = ex.length();
    long long int ans = 1, base;
    if(!(n % k)) base = k;
    else base = n % k;
    for(int i = n; i >= base; i -= k)
        ans *= i;
    cout<<ans<<endl;

    return 0;
}
