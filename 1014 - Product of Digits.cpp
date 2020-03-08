#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string res;
    cin>>n;
    if(n == 0) cout<<"10"<<endl;
    else if(n >= 1 && n <= 9) cout<<n<<endl;
    else
    {
        for(int i = 9; i > 1; i--)
        {
            while(!(n % i))
            {
                res.push_back(i + '0');
                n /= i;
            }
        }
        reverse(res.begin(), res.end());
        if(n == 1) cout<<res<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
