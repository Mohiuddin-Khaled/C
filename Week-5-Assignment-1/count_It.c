#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// capital letter
int ccount(char s[], int i)
{
    // base case
    if (s[i] == '\0')
        return 0;
    // recursive call
    int ccnt = ccount(s, i + 1);
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        return ccnt + 1;
    }
    else
    {
        return ccnt;
    }
}
// small letter
int scount(char s[], int i)
{
    // base case
    if (s[i] == '\0')
        return 0;
    // recursive call
    int scnt = scount(s, i + 1);
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        return scnt + 1;
    }
    else
    {
        return scnt;
    }
}

// space count
int pcount(char s[], int i)
{
    // base case
    if (s[i] == '\0')
        return 0;
    // recursive call
    int pcnt = pcount(s, i + 1);
    if (s[i] == ' ')
    {
        return pcnt + 1;
    }
    else
    {
        return pcnt;
    }
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    fgets(s, 1001, stdin);
    int ccnt = ccount(s, 0);
    int scnt = scount(s, 0);
    int pcnt = pcount(s, 0);
    printf("Capital - %d\nSmall - %d\nSpaces - %d", ccnt, scnt, pcnt);
    return 0;
}
