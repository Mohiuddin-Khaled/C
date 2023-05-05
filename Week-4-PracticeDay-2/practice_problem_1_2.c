#include <stdio.h>
void my_abs(int x)
{
    if (x > 0)
    {
        printf("%d", x);
    }
    else if (x < 0)
    {
        int num = -(x);
        printf("%d", num);
    }
    else
    {
        printf("%d", x);
    }
}
int main()
{
    int val;
    scanf("%d", &val);
    my_abs(val);
    return 0;
}