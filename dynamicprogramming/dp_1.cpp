// Beginning of a dynamic programming journey
#include <bits/stdc++.h>
using namespace std;

// using DP (method Memoization)
// top down
int fib_one(int memo[], int n)
{
    if (memo[n] == -1)
    {
        int res = 0;
        if (n == 0 || n == 1)
            res = n;
        else
            res = fib_one(memo, n - 1) + fib_one(memo, n - 2);
        memo[n] = res;
    }
    return memo[n];
}

// using DP (method Tabulation)
// bottom up
int fib_two(int n)
{
    int fib[n+1] ;
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i <=n; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    return fib[n];
}

int main()
{
    int memo[15] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    cout << "using memoization"
         << " " << fib_one(memo, 11) << endl;
    cout << "using tabulation"
         << " " << fib_two(11) << endl;
    return 0;
}