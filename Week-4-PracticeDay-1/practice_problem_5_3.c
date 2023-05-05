#include <stdio.h>
// has return + no parameter
char capital_to_small(void)
{
    char ch;
    scanf("%c", &ch);
    char small = ch + 32;
    return small;
}
int main()
{
    char s = capital_to_small();
    printf("%c", s);
    return 0;
}