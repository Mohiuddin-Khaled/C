#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = b * c * d;
    e = a / ans;
    printf("%d", e);
    return 0;
}
// 28 1 2 7
// 75 1 3 5