#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (a[i] == a[j])
        {
            printf("%lld ", a[i]);
        }
        else
        {
            printf("%lld ", a[i]);
            printf("%lld ", a[j]);
        }
    }
    return 0;
}