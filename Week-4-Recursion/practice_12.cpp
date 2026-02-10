/* write a recursive solution to find the second maximum number from a given set of integers.

   input
   -----
   5
   5 8 7 9 3

   output
   ------
   8        // second largest maximum value
*/

#include <bits/stdc++.h>
using namespace std;

void secondMax(int i, int n, int *ar, int *fbest, int *sbest)
{
    // the last value is the maximum for this step
    if (i == n - 1)
    {
        *fbest = ar[i];
        return;
    }
    // the following if() is a trick
    // to avoid ambiguity
    secondMax(i + 1, n, ar, fbest, sbest);
    if (ar[i] > *fbest)
    {
        *sbest = *fbest;
        *fbest = ar[i];
    }
    else if (ar[i] > *sbest)
    {
        *sbest = ar[i];
    }
}

int main()
{
    int i, n, ar[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    // fbest = first best
    // sbest = second best
    int fbest, sbest;
    fbest = sbest = ar[0];
    // will be updated via reference
    // as we will not use global variables
    secondMax(0, n, ar, &fbest, &sbest);
    cout << sbest << endl;
    return 0;
}
