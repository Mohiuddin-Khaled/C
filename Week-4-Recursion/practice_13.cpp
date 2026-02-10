/* Implement linear search recursively, i.e. given an array of integers, find a specific value form
   it. Input format: first n, the number of elements. Then n integers. Then, q, number of query, then
   q integers. Output format: for each of the q integers, print its index(within 0 to n - 1) in the
   array or print 'not found', whichever is appropriate.

   input
   -----
   5
   2 9 4 7 6
   2
   5 9

   output
   ------
   not found
   1
*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int i, int n, int value, int *ar)
{
    if (i == n) // base condition
        return -1;
    if (ar[i] == value) // return found index
        return i;
    return linearSearch(i + 1, n, value, ar); // forward recursion
}

int main()
{
    int ar[101], n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int value;
        cin >> value;
        int found = linearSearch(0, n, value, ar);
        if (found == -1)
            cout << "not found!" << endl;
        else
            cout << "Found at " << found << endl;
    }
    return 0;
}