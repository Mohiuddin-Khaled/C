#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int x = 0; x < t; x++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int ecnt = 0, ocnt = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
            {
                ecnt++;
            }
            else
            {
                ocnt++;
            }
        }
        if (ecnt == ocnt)
        {
            printf("0\n");
        }
        else if (ocnt > ecnt && (ocnt - ecnt) % 2 == 0)
        {
            printf("%d\n", (ocnt - ecnt) / 2);
        }
        else if (ocnt < ecnt && (ecnt - ocnt) % 2 == 0)
        {
            printf("%d\n", (ecnt - ocnt) / 2);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}