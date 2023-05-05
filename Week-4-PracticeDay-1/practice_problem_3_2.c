#include <stdio.h>
// no return + has parameter
void char_to_ascii(char x)
{
    int ans = (int)x;
    printf("%d", ans);
}
int main()
{
    char c;
    scanf("%c", &c);
    char_to_ascii(c);
    return 0;
}