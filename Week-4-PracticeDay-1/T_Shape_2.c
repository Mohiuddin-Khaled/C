#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < n; i++)
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

    return 0;
}