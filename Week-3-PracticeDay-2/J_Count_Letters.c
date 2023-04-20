#include <stdio.h>
int main()
{
    // char array size have any limit
    char s[10000001];
    gets(s);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int y = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ch)
            {
                y++;
            }
        }
        if (y == 0)
        {
            continue;
        }
        printf("%c : %d\n", ch, y);
    }

    return 0;
}