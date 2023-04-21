#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char s[1001];
    scanf("%s", s);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int count = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ch)
            {
                count++;
            }
        }
        printf("%c - %d\n", ch, count);
    }

    return 0;
}
