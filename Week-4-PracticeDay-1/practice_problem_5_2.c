#include <stdio.h>
// no return + has parameter
void capital_to_small(char c)
{
    char small = c + 32;
    printf("%c", small);
}
int main()
{
    char ch;
    scanf("%c", &ch);
    capital_to_small(ch);
    return 0;
}