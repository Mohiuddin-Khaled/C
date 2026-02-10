/* write a recursive solution to print the polynomial series for any input n:
    1 + x + x^2 + ......... + x^n - 1

    input
    -----
    5
    output
    ------
    1 + x + x^2 + x^3 + x^4
*/
#include <bits/stdc++.h>
using namespace std;

void print_poly(int i, int n)
{
    if (i < n)
    {
        if (i == 0)
            cout << 1;
        else
        {
            cout << " + X";
            if (i > 1)
            {
                cout << "^" << i;
            }
        }
        print_poly(i + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    print_poly(0, n);
    cout << endl;
    return 0;
}