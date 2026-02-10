/* Implement binary search recursively, i.e. given an array of sorted integers, find a query integer
   from it. Input format: first n, the number of elements. Then n integers. Then, q, number of query,
   then q integers. Output format: for each of the q integers, print its index (within 0 to n - 1) in
   the array or print 'not found', whichever is appropriate.

    input
    -----
    5
    1 2 3 4 5
    2
    3 -5

    output
    ------
    2
    not found

    # divide and conquer technique
    # binary search will only work for sorted array
*/
// binary search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int i, int j, int value, int *ar)
{
    if (i > j) // base case
        return -1;
    int mid = (i + j) / 2;
    if (ar[mid] == value) // return found value index
        return mid;
    else if (ar[mid] > value) // left half
        return binarySearch(i, mid - 1, value, ar);
    else // right half
        return binarySearch(mid + 1, j, value, ar);
}

int main()
{
    int ar[101], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n); // ascending sort
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int value;
        cin >> value;
        int found = binarySearch(0, n - 1, value, ar);
        if (found == -1)
            cout << "not found" << endl;
        else
            cout << "found at " << found << endl;
    }
    return 0;
}
