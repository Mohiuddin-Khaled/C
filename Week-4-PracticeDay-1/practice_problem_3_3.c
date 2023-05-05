#include <stdio.h>
// has return + no parameter
int char_to_ascii(void)
{
    char c;
    scanf("%c", &c);
    int ascii = (int)c;
    return ascii;
}
int main()
{
    int value = char_to_ascii();
    printf("%d", value);
    return 0;
}