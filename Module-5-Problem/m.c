#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (x >= 'A' && x <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        if (x >= 'a' && x <= 'z')
        {
            printf("IS SMALL\n");
        }
    }
    return 0;
}