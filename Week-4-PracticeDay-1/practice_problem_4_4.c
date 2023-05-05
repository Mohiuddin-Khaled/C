#include <stdio.h>
// no return + no parameter
void small_to_capital(void)
{
    char c;
    scanf("%c", &c);
    char capital = c - 32;
    printf("%c", capital);
}
int main()
{
    small_to_capital();
    return 0;
}