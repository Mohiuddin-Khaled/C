#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int value1 = a % 10;

    int value2 = a / 10;

    if (value1 % value2 == 0 || value2 % value1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}