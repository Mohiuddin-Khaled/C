
// Take input each string is lowercase
// press no space when taking input
#include <stdio.h>
void vowel(char *ch)
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
}

int main()
{
    char s[10];

    scanf("%s", s);
    vowel(s);
    return 0;
}