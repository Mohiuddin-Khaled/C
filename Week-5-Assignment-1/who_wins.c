#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    long long int x1, x2;
    int tcnt = 0, pcnt = 0, dcnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &x1, &x2);
        if (x1 > x2)
        {
            tcnt++;
        }
        else if (x1 < x2)
        {
            pcnt++;
        }
        else
        {
            dcnt++;
        }
    }
    if (tcnt > pcnt && tcnt > dcnt)
    {
        printf("Tiger");
    }
    else if (tcnt<pcnt && pcnt>dcnt)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}
