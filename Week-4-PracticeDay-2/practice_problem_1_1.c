#include <stdio.h>
#include <stdlib.h>
// has return + has parameter
int my_abs(int val)
{
    int ans = abs(val);
    return ans;
}
int main()
{
    int num;
    scanf("%d", &num);
    int a = my_abs(num);
    printf("%d", a);
    return 0;
}