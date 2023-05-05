#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
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
