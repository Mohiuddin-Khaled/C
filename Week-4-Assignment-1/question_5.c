#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
    int k = strlen(s) - 1;
    int flag = 1;
    for (int i = 0, j = k; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    char s[11];
    scanf("%s", s);
    int ans = is_palindrome(s);
    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}