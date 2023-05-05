#include <stdio.h>
void swap(int *a, int n)
{
    for (int i = 0; i < 3 - 1; i++)
    {
        int temp;
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    swap(a, 3);
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
        printf("%d\n", b[j]);
    }
    return 0;
}