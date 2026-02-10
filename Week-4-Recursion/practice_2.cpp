/* Write a recursive function to print an array in the following order. [0] [n - 1] [1] [n - 2] ...........[(n - 1) / 2] [n / 2]
   input
   -----
   5
   1 5 7 8 9

   output
   ------
   1 9
   5 8
   7 7
*/

#include <bits/stdc++.h>
using namespace std;

void print_fst_lst(int i, int j, int *ar)
{
    if (i <= j)
    {
        cout << ar[i] << " " << ar[j] << endl; // forward print
        print_fst_lst(i + 1, j - 1, ar);
        // cout << ar[i] << " " << ar[j] << endl; // backword print
    }
}

int main()
{
    int i, n, ar[100];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    print_fst_lst(0, n - 1, ar);
    return 0;
}