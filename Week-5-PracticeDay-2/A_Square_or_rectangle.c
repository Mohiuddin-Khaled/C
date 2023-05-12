#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int w, h;
    while (t--)
    {
        scanf("%lld %lld", &w, &h);
        if (w == h)
            printf("Square\n");
        else
            printf("Rectangle\n");
    }
    return 0;
}