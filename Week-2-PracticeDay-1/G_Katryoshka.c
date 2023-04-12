#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int ans = 0;
    if (n == 0 || k == 0)
    {
        printf("0\n");
    }
    else
    {
        long long int min = n;
        if (m < min)
        {
            min = m;
        }
        if (k < min)
        {
            min = k;
        }
        // condition III
        ans += min;

        n -= min;
        m -= min;
        k -= min;
        n = n / 2;

        // Condition III + condition I
        if (n < k)
        {
            ans += n;
        }
        else
        {
            ans += k;
        }

        printf("%lld\n", ans);
    }

    return 0;
}