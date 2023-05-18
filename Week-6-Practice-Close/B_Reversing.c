#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int l = 0, r = i - 1;
            while (l < r)
            {
                int tmp = a[l];
                a[l] = a[r];
                a[r] = tmp;
                l++;
                r--;
                //  printf("%d %d\n", l, r);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}