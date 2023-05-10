#include <stdio.h>

int vowel(char s[], int i)
{
    // base case
    if (s[i] == '\0')
        return 0;
    int cnt = vowel(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] += 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char s[201];
    gets(s);
    int count = vowel(s, 0);
    printf("%d", count);
    return 0;
}