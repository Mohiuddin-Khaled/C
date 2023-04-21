#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;

    scanf("%d %d", &n, &k);

    for (int j = 0; j < k; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
