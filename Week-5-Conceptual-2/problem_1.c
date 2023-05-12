#include <stdio.h>
#include <string.h>
int main()
{
    char s[10], ch1, ch2, ch3;
    scanf("%s %c %c %c", s, &ch1, &ch2, &ch2);
    char ans;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ch1 || s[i] == ch2 || s[i] == ch3)
        {
            continue;
        }
        ans = s[i];
    }
    printf("%c", ans);
    return 0;
}