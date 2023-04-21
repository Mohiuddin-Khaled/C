#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m1, m2, days;
    scanf("%d %d %d", &m1, &m2, &days);

    int answer = (m1 * days) / m2;

    printf("%d", answer);

    return 0;
}
