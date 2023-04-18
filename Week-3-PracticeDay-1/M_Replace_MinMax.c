#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int maxidx, minidx;

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxidx = i;
        }
        if (min > a[i])
        {
            min = a[i];
            minidx = i;
        }
    }

    // printf("%d %d\n", max, min);

    a[minidx] = max;
    a[maxidx] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}