#include <stdio.h>
long long int factorial(long long int n)
{
    // base case
    if (n == 0)
        return 1;
    long long int ans = factorial(n - 1);
    return ans * n;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int value = factorial(n);
    printf("%lld", value);
    return 0;
}