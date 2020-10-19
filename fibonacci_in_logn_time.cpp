#include <iostream>

#define ll long long

using namespace std;

pair<ll, ll> fib (ll n, ll m) {
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1, m);
    ll c = p.first * (2 * p.second - p.first);
    ll d = p.first * p.first + p.second * p.second;
    c = (c+m) % m;
    d = (d+m) % m;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}

long long fibonacci(ll n, ll m) {
    pair<ll, ll> pr = fib(n, m);
    int ans = pr.first;
    return (ans + m) % m;
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << fibonacci(n, m) << endl;
}
