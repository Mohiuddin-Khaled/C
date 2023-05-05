#include <stdio.h>
// has return + has parameter
char small_to_capital(char ch)
{
    char capital = ch - 32;
    return capital;
}
int main()
{
    char c;
    scanf("%c", &c);
    char val = small_to_capital(c);
    printf("%c", val);
    return 0;
}