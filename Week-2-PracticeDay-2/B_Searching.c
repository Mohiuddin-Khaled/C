#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sValue;
    scanf("%d", &sValue);

    int ans = -1;

    for (i = 0; i < n; i++)
    {
        if (a[i] == sValue)
        {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    return 0;
}