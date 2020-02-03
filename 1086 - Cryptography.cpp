#include <iostream>
#include <bits/stdc++.h>
#define SIZE  1000000

using namespace std;

vector <int> sieve()
{
    vector <int> primes;
    bool compound[SIZE];
    for(int i = 3; i <= SIZE; i += 2) compound[i] =false;
    for(int i = 3; i * i <= SIZE; i += 2)
    {
        if(!compound[i])
            for(int j = i * i; j <= SIZE; j += 2 * i)
                compound[j] = true;
    }
    primes.push_back(2);
    for(int i = 3; i <= SIZE; i += 2)
        if(!compound[i]) primes.push_back(i);
    return primes;
}

int main()
{
    vector <int> primes = sieve();
    int k, n;
    cin>>k;
    for(int i = 0; i< k; i++)
    {
        cin>>n;
        cout<<primes[n-1]<<endl;
    }

    return 0;
}
