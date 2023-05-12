#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int ecnt = 0, ocnt = 0, dcnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ecnt++;
        }
        else
        {
            ocnt++;
        }
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            dcnt++;
        }
    }
    printf("Even: %d\nOdd: %d\nDivisor count: %d", ecnt, ocnt, dcnt);
    return 0;
}