#include <stdio.h>
// no return + has parameter
void small_to_capital(char ch)
{
    char capital = ch - 32;
    printf("%c", capital);
}
int main()
{
    char c;
    scanf("%c", &c);
    small_to_capital(c);
    return 0;
}