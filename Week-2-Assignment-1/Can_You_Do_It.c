#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    // negative
    if (n < 0)
    {
        for (int i = n; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }
    // Zero
    else if (n == 0)
    {
        for (int i = n; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }
    // Positive
    else
    {
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
