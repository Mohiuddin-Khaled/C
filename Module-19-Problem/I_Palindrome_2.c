#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], str[1001];
    gets(s);
    strcpy(str, s);
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    if (strcmp(s, str) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}