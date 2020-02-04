#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    long long int num;
    vector <long long int> n;
    while(cin>>num) n.push_back(num);
    reverse(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++)
        printf("%.4lf\n", sqrt(n[i]));

    return 0;
}
