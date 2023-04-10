#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int val = x / 1000;
    if (val % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}