//  Given n n is prime. Find the no of numbers in range 1 to 10^6 that will have n as their minimum prime factor.

//  We can do that while precomputing the sieve
// Instead of T/F we store 0 and 1 in sieve and every time the multiple if ith index is marked as 0 increment the value of ith element
#include <bits/stdc++.h>
using namespace std;
int n = 1000000;
int sieve[1000000];

void createSieve()
{
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = 1;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= n; j = j + i)
            { // To check if i is the least prime factor
                if (sieve[j] != 0)
                {
                    sieve[j] = 0;
                    sieve[i]++;
                }
            }
        }
    }
}

int main()
{
    createSieve();
    int k;
    cin >> k;
    cout << sieve[k];
}
