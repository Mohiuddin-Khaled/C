/* suppose you are given an array of integers in an arbitrary order.
   write a recursive solution to find the maximum element from the array.

   input
   -----
   5
   7 4 9 6 2

   output
   ------
   9
position i to end of the array: range [a0, a1, a2,.............an]
    Max(i) => maximum of i-th position and Max(i + 1)
    or,  Max(i) => maximum(ar[i], Max(i + 1))
*/
// arbitrary order array
// find maximum element using recursive solution

#include <bits/stdc++.h>
using namespace std;

int Max(int i, int n, int *ar)
{
    // the last value is the maximum for this step
    if (i == n - 1)
        return ar[i];                   // option 1
    int mx = Max(i + 1, n, ar);         // option 2
    return ((ar[i] > mx) ? ar[i] : mx); // ternary operator, option1 or option2
}

int main()
{
    int n, ar[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << Max(0, n, ar) << endl;
    return 0;
}