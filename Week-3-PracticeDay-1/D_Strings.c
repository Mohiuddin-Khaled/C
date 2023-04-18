#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int alen = strlen(a);
    int blen = strlen(b);

    printf("%d %d\n", alen, blen);
    printf("%s%s\n", a, b);

    char temp[22];

    for (int i = 0; a[i] != '\0', b[i] != '\0'; i++)
    {
        temp[0] = a[0];
        a[0] = b[0];
        b[0] = temp[0];
        break;
    }

    printf("%s ", a);
    printf("%s", b);

    return 0;
}