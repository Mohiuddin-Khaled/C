#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum = llabs(sum);
    printf("%lld\n", sum);

    return 0;
}
