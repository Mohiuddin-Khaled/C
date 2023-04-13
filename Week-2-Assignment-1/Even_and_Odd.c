#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);

        // Even
        if (v % 2 == 0)
        {
            even += v;
        }
        else
        {
            odd += v;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}
