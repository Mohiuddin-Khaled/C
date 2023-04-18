#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);

        for (int i = 0; i < n; i++)
        {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}