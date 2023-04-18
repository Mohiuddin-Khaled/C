#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    char t[1000];

    gets(s);
    gets(t);

    int slen = strlen(s);
    int tlen = strlen(t);

    printf("%d %d\n", slen, tlen);

    printf("%s %s", s, t);
    return 0;
}