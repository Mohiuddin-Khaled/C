#include <stdio.h>
// has return + has parameter
int char_to_ascii(char c)
{
    int ascii = (int)c;
    return ascii;
}

int main()
{
    char c;
    scanf("%c", &c);
    int avalue = char_to_ascii(c);
    printf("%d", avalue);
    return 0;
}