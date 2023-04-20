#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];

    for (int i = 0; i < n; i++)
    {
        // %1d reads a single digit
        scanf("%1d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d ",a[i]);
        sum += a[i];
    }
    printf("%d", sum);

    return 0;
}