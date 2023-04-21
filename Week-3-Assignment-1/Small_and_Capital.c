#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    scanf("%s", s);

    int ucnt = 0, lcnt = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ucnt++;
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lcnt++;
        }
    }

    printf("%d %d", ucnt, lcnt);

    return 0;
}
