#include <stdio.h>
#include <stdlib.h>
void my_abs(void)
{
    int n;
    scanf("%d", &n);
    int val = abs(n);
    printf("%d", val);
}
int main()
{
    my_abs();
    return 0;
}