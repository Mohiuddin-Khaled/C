#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    scanf("%s", s);

    int vcnt = 0;

    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vcnt++;
        }
        i++;
    }

    printf("%d", vcnt);

    return 0;
}
