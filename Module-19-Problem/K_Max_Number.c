#include <stdio.h>
#include <limits.h>
long long int max(long long int a[], int n, int i)
{
    if (i == n)
        return INT_MIN;
    int val = max(a, n, i + 1);
    if (a[i] > val)
    {
        return a[i];
    }
    else
    {
        return val;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int ans = max(a, n, 0);
    printf("%lld", ans);
    return 0;
}