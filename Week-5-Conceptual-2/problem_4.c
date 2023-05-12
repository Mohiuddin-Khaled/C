#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d ", ar[1][i]);
    }
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", ar[i][2]);
    }

    return 0;
}