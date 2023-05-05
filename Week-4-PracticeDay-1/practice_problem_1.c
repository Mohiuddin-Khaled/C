#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int l = s; l >= 1; l--)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}