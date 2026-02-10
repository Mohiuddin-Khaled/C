// Geometric Series
/* write a recursive solution to evaluate the previous polynomial for any give x and n.
   like, where x = 2 and n = 5, we have 1 + X + X^2 + X^3 + X^4 + ................. + X^n-1 = 31
   input
   -----
   2 5

   output
   ------
    31

   # recursive formula:  f(x, n) = x^n + f(x, n - 1)
*/

// polynomial addition
#include <bits/stdc++.h>
using namespace std;

int sum_poly(int i, int n, int x)
{
    if (i == n)
        return 0;
    return (int)pow(x, i) + sum_poly(i + 1, n, x);
}

int main()
{
    int n, x;
    cin >> x >> n;

    int value = sum_poly(0, n, x);
    cout << "Geometric Series Value is: " << value << endl;
    return 0;
}