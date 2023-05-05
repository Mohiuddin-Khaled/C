#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s, k, m;
    s = n - 1;
    k = 1;
    m = (2 * n) - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("%d", l);
        }

        if (i <= (n - 1))
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}
