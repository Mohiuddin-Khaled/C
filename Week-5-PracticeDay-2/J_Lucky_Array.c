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
    long long int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    // printf("%d", min);
    int ocnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            ocnt++;
        }
    }
    if (ocnt % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}