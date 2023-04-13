#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    int a[n];

    // Take input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // x ---> index & v ---> value
    int x, v;
    scanf("%d %d", &x, &v);

    // check index for insert the value
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            a[i] = v;
        }
    }

    // print reverse order
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
