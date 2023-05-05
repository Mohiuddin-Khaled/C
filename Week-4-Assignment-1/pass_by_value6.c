#include <stdio.h>
int Remainder(int a, int b)
{
    int ans = a % b;
    return ans;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int val = Remainder(x, y);
    printf("%d", val);
    return 0;
}