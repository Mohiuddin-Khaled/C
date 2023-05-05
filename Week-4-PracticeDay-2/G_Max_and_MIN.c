#include <stdio.h>

void max_min(int *a, int n)
{
    int max = -100001;
    int min = 100001;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max_min(a, n);
    return 0;
}