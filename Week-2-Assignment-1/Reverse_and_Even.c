#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Take input
    int n;
    scanf("%d", &n);

    int a[n];

    // Take input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // print even index value
    for (int i = n - 1; i >= 0; i--)
    {

        if (i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
