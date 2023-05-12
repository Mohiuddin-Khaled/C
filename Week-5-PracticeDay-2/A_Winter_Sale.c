#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float a = 100 - x;
    float b = 100 / a;
    float ans = p * b;
    printf("%0.2f", ans);
    return 0;
}