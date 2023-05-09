// Online C compiler to run C program online
#include <stdio.h>
long long int sumar(long long int *a, int n)
{
    // base case
    if (n == 0)
        return 0;
    long long int sum = sumar(a + 1, n - 1);
    return sum + a[0];
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int ans = sumar(ar, n);
    printf("%lld", ans);
    return 0;
}