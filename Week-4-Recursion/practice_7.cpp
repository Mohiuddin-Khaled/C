/* write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1 and 1.
   input
   -----
   6
   output
   ------
   8

    1st and 2nd fibonacci numbers: 1

    fib(n) = fib(n - 1) + fib(n - 2)
*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "";
    return 0;
}