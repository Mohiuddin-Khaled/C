#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
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
    sort(a, n);
    int x = (n + 1) / 2;
    int y = n / 2;
    int z = (n / 2) + 1;
    if (n % 2 != 0)
    {
        printf("%d", a[x - 1]);
    }
    else
    {
        printf("%d %d", a[y - 1], a[z - 1]);
    }

    return 0;
}
