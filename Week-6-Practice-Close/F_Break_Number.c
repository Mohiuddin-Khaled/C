#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int max = 0, a;
    while (n--)
    {
        long long int cnt = 0;
        scanf("%lld", &a);

        while (a % 2 == 0)
        {
            cnt++;
            a /= 2;
        }
        max = max < cnt ? cnt : max;
    }
    printf("%lld", max);
    return 0;
}