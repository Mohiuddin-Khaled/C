/* write a recursive program to compute n!(factorial)
input
-----
5
output
------
120

Recursive formula:
    n! = n * (n - 1)!
    0! = 1! = 1
    f(n) = n * f(n - 1)

Base condition:
    n = 1 and n = 0
*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << " ";
    return 0;
}
