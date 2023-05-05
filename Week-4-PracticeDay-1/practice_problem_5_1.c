#include <stdio.h>
// has return + has parameter
char capital_to_small(char c)
{
    char small = c + 32;
    return small;
}

int main()
{
    char c;
    scanf("%c", &c);
    char value = capital_to_small(c);
    printf("%c", value);
    return 0;
}