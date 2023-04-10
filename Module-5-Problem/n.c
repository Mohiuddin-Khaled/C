#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        char upperCase = ch - 32;
        printf("%c\n", upperCase);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        char lowerCase = ch + 32;
        printf("%c\n", lowerCase);
    }
    return 0;
}