#include <stdio.h>
void solve(int num)
{
    if (num == 0)
        return;
    int x = num % 10;
    solve(num / 10);
    printf("%d ", x);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        // corner case
        if (n == 0)
        {
            printf("0");
        }
        solve(n);
        printf("\n");
    }
    return 0;
}