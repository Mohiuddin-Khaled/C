#include <stdio.h>
int main()
{
    long long int a, b, c;
    long long int ans;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &ans);
    long long int ans1 = (a) + (b) * (c);
    long long int ans2 = (a) + (b) - (c);
    long long int ans3 = (a) - (b) + (c);
    long long int ans4 = (a) - (b) * (c);
    long long int ans5 = (a) * (b) + (c);
    long long int ans6 = (a) * (b) - (c);

    if (ans1 == ans)
    {
        printf("YES\n");
    }
    else if (ans2 == ans)
    {
        printf("YES\n");
    }
    else if (ans3 == ans)
    {
        printf("YES\n");
    }
    else if (ans4 == ans)
    {
        printf("YES\n");
    }
    else if (ans5 == ans)
    {
        printf("YES\n");
    }
    else if (ans6 == ans)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}