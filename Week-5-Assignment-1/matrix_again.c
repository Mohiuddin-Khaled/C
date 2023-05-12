#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    scanf("%d %d", &n, &m);
    int element[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &element[i][j]);
        }
    }
    //last row
    for (int col = 0; col < m; col++)
    {
        printf("%d ", element[n - 1][col]);
    }
    printf("\n");
    //last column
    for (int row = 0; row < n; row++)
    {
        printf("%d ", element[row][m - 1]);
    }
    return 0;
}
