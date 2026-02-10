/* you will be given an array of integers, write a recursive solution to print it in reverse order.
   input
   -----
   5
   69 87 45 21 47

   output
   ------
   47 21 45 87 69
*/

#include <bits/stdc++.h>
using namespace std;

void print_rev(int i, int n, int *a)
{
    if (i < n)
    {
        print_rev(i + 1, n, a);
        cout << a[i] << " ";
    }
}

int main()
{
    int i, n, a[10];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print_rev(0, n, a);
    return 0;
}