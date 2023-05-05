#include <stdio.h>
int my_len(char *a)
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char a[100];
    scanf("%s", a);
    // printf("%s", a);
    int ans = my_len(a);
    printf("%d", ans);
    return 0;
}