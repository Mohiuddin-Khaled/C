#include <stdio.h>
#include <math.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    double b = n * 1.0 / k * 1.0;
    int c = ceil(b);
    int id = 0;
    int min, x = k;
    for (int i = 0; i < n; i++)
    {
        if (i == c)
            break;
        min = a[id];
        for (int j = id; j < x; j++)
        {
            if (j == n)
                break;
            // printf("%d ", j);
            if (a[j] < min)
            {
                min = a[j];
            }
        }
        printf("%d ", min);
        id += k;
        x += k;
    }
    return 0;
}