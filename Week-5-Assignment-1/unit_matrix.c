#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int value[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &value[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && value[i][j] != 1)
            {
                flag = 0;
                continue;
            }
            if (i != j && value[i][j] != 0)
            {
                flag = 0;
                continue;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
