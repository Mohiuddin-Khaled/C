#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    int c = 2 * n - 1;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= d; l++)
        {
            printf(" ");
        }
        for (int j = c; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        d++;
        c -= 2;
    }

    return 0;
}