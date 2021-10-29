// Check Prime => O(sqrt(N))
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int count = 0;
//         for (int i = 1; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 count++;
//                 if (n / i != i)
//                 {
//                     count++;
//                 }
//             }
//         }
//         if (count == 2)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }

//Create an boolean array and mark everything T except 0 and 1
// First Prime=>2 and all multiples of 2 will not be prime and mark all of them as F
// Next=>3 and mark all of its multiples as F
//  and keep doing that for all those who are marked as T

// Optimization:
// ->While marking multiples of i start marking from its sqaure
// Instead of running over whole array we can just go till sqrt(n) because in inner loop we are having i*i

#include <bits/stdc++.h>
using namespace std;

int n = 1000000;
bool sieve[1000001]; //Everything is marked as F bcoz it is declared globally
void createSieve()
{
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                sieve[j] = false;
            }
        }
    }
}

void createSieveOptimized() //O(Nlog(logN))
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
}

int main()
{
    // O(nloglogn)
    createSieveOptimized();
    int n;
    cin >> n;
    // O(1)
    if (sieve[n] == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
