/* write a recursive solution to get the revers eof a given integer. Function must return an int

   input
   -----
   123405

   output
   ------
   504321

   n = n % 10
   n = n / 10
*/

#include <bits/stdc++.h>
using namespace std;

int reverseDigit(int num, int value)
{
    if (num == 0)
        return value;
    value = value * 10 + num % 10;
    return reverseDigit(num / 10, value);
}

int main()
{
    int n;
    cin >> n;
    int digit = reverseDigit(n, 0);
    cout << digit << endl;
    return 0;
}
