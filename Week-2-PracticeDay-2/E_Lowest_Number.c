#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    int min = INT_MAX;
    int index;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
            index = i + 1;
        }
    }
    printf("%d %d", min, index);
    return 0;
}