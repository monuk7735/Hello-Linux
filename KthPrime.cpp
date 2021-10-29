// Find the Kth Prime  k<=5 * 10^6
// Create sieve and get all primes
#include <bits/stdc++.h>
using namespace std;

// The problem will be the size of sieve as we don't know at what position will be the 5*10^6 th prime will be
int n = 86028121;
bool sieve[86028122];
vector<int> primes;

void createSieve()
{
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                sieve[j] = false;
            }
        }
    }
    // Creating Primes vector
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == true)
        {
            primes.push_back(i);
        }
    }

    // Given limit for k is 5*10^6. To find the exact size of sieve to get kth prime
    // int limit = 5 * 1000000;
    // int count = 0;
    // int size = 1;
    // for (int i = 2;; i++)
    // {
    //     if (sieve[i] == true)
    //     {
    //         count++;
    //     }
    //     if (count == limit)
    //     {
    //         size = i;
    //         break;
    //     }
    // }
    // cout << size;
}

int main()
{
    createSieve();

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << primes[k - 1] << endl;
    }
    return 0;
}
