/* write a recursive program to remove all odd integers from an array. you must not use any extra
   array or print anything in the function. Just read input, call the recursive function. Just read
   input, call the recursive function, then print the array in main() function.

   input
   -----
   6
   1 54 88 6 55 7

   output
   ------
   54 88 6
*/
// even number print
#include <bits/stdc++.h>
using namespace std;

void even_num(int i, int j, int *n, int *ar)
{
    if (i == *n)
    {
        *n = j; // resize n
        return;
    }
    if (ar[i] % 2 == 0)
        ar[j++] = ar[i];
    even_num(i + 1, j, n, ar);
}

int main()
{
    int i, n, ar[100];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> ar[i];
    even_num(0, 0, &n, ar);
    for (int k = 0; k < n; k++)
        cout << ar[k] << " ";
    return 0;
}