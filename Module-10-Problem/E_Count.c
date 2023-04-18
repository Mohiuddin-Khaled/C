#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    gets(s);
    int sum = 0;
    int i = 0;
    while (i < strlen(s))
    {
        sum += s[i] - '0';
        i++;
    }
    printf("%d", sum);
    return 0;
}