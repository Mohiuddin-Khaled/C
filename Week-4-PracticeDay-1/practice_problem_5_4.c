#include <stdio.h>
// no return + no parameter
void capital_to_small(void)
{
    char c;
    scanf("%c", &c);
    char small = c + 32;
    printf("%c", small);
}
int main()
{
    capital_to_small();
    return 0;
}