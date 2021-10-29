//  2 is only even prime
// 2 and 3 are only consecutive primes
// Every prime can be written as 6b+1 or 6n-1  except 2 and 3

// Every even integet greater than 2 can be expressed as sum of two primes  Eg 16=>13+3

// (p-1)! %p   = (p-1)%p   => Wilson Theorem

// Eg p=5  => 4! % 5 =24%5=4   and  (5-1)%5=4

// Prime=>
// -> Divisible by 1 and itself only
// -> Total number of factors are 2

// Find no of factors => O(N)
// count=0
// Loop 1 to n (included):
//          if n%i==0:
//                  count++
// End Loop

// If count==2 => Prime

// No of factors O(sqrt(N) * logN)   //because in every iteration sqrt is executed and sqrt take logN time
// To make it O(sqrt(N)) we write i*i<=n insted of i<=sqrt(n)
// count=0
// Loop 1 to sqrt(n) (included):
//          if n%i==0:
//                  count++
//                  If(i!=(n/i)):
//                       count++
// End Loop

// If count==2 => Prime

// checking i and n/i because we are counting number of factore and if number is a perfect square like 36 then 6 will get counted twice So to avoid this state we use i!=(n/i)

// If count==2 => Prime

// Sum of all factors
// sum=0
// loop i:1 to i*i<=n:
//          if(n%i==0):
//              sum+=i
//              if(i!=n/i):
//                  sum+=(n/i)
// End Loop

// Given n<=10^9. Find a,b,c such that a*b*c=n and a!=b!=c!=1 and a,b,c>=2

// Find the smallest factor of n other than 1 . Let it be a. Now we can find bc as n/a. Now find factors of bc and smallest factor of bc not equal to a ie check from a+1 to n. Find c as n/ab. Check if c==1 or not

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a = n, b = n, c = n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        n = n / a;
        for (int i = a + 1; i * i <= n; i++)
        {
            if (n % i == 0 && i != a)
            {
                b = i;
                break;
            }
        }
        c = (n / b);
        // This c has to be >=2 or >1
        if (b != c && a != c && c > 1)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
        else
            cout << "NO\n";
    }
}
