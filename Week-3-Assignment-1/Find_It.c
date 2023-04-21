#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
