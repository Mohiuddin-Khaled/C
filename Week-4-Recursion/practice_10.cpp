/* write a recursive solution to compute lcm of two integers.
   input
   -----
   23 488

   output
   ------
   11224

Formula of lcm:
    lcm(a, b) = (a x b) / gcd(a, b)
*/

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b, int i)
{
    if ((a * i) % b == 0)
        return a * i;
    return lcm(a, b, i + 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b, 1) << endl;
    return 0;
}