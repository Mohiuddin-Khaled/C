#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 10000)
    {
        printf("Gucci Bag\n");
        if (taka > 20000)
        {
            printf("Gucci Belt\n");
        }
    }
    else if (taka >= 5000)
    {
        printf("Levis Bag\n");
    }
    else
    {
        printf("Something\n");
    }
    return 0;
}