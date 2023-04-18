#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[101];

        scanf("%s", &s);

        int slen = strlen(s);

        if (slen > 10)
        {
            printf("%c", s[0]);
            int sl = strlen(s) - 2;
            printf("%d", sl);
            printf("%c\n", s[slen - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}
