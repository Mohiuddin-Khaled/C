#include <stdio.h>
void Print(int n)
{
    int i = 1;
    do
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }

        i++;
    } while (i <= n);
}
int main()
{
    int n;
    scanf("%d", &n);
    Print(n);
    return 0;
}