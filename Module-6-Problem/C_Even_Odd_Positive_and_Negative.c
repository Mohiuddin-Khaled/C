#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even = 0,
        odd = 0,
        pos = 0,
        neg = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            // Even
            even++;
        }
        else
        {
            // Odd
            odd++;
        }

        if (x > 0)
        {
            // Positive
            pos++;
        }
        else if (x < 0)
        {
            // Negative
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}