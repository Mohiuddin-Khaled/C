#include <stdio.h>
// no return + no parameter
void char_to_ascii(void)
{
    char c;
    scanf("%c", &c);
    printf("%d", c);
}
int main()
{
    char_to_ascii();
    return 0;
}