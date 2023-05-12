#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int mnum = s - (a + b + c);
        printf("%d\n", mnum);
    }
    return 0;
}
