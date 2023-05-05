#include <stdio.h>
int sum(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = sum(a, b);
    printf("%d", ans);
    return 0;
}