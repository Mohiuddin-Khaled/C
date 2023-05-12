#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int al = 0, bd = 0;
    for (int i = 0; i < n; i++)
    {
        char ch1, ch2;
        scanf("%c %c", &ch1, &ch2);
        if (ch1 > ch2)
        {
            al++;
        }
        else
        {
            bd++;
        }
    }
    if (al > bd)
    {
        printf("Alisha");
    }
    else if (al < bd)
    {
        printf("Bidisha");
    }
    else
    {
        printf("Tie");
    }
    return 0;
}