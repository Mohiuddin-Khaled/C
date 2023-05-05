#include <stdio.h>
// has return + no parameter
char small_to_capital(void)
{
    char c;
    scanf("%c", &c);
    char capital = c - 32;
    return capital;
}
int main()
{
    char ch = small_to_capital();
    printf("%c", ch);
    return 0;
}