#include <stdio.h>
int even_odd(void)
{
    int n;
    scanf("%d", &n);
    int ans = n % 2;
    return ans;
}
int main()
{
    int val = even_odd();
    if (val == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}