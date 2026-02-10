/* write a recursive program to determine whether a given integer is prime or not.
   input
   -----
   49
   999983
   1

   output
   ------
   not prime
   prime
   not prime
*/

#include <bits/stdc++.h>
using namespace std;

int isPrime(int i, int rt, int n)
{
    if (n < 2)
        return 0;
    if (i > rt) // dividing upto sqrt n
        return 1;
    // if (i * i > n) return 1;  // base case 2 -> another case alternative of sqrt()
    if (n % i == 0)
        return 0;
    return isPrime(i + 1, rt, n); // forward recursion
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (isPrime(2, (int)sqrt(n), n) == 1)
            cout << "prime" << endl;
        else
            cout << "not prime" << endl;
    }
    return 0;
}
