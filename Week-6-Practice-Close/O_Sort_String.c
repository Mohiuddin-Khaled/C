#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char c;
    int cnt[26] = {0};
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &c);
        cnt[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] > 0)
        {
            printf("%c", i + 'a');
            cnt[i]--;
        }
    }
    return 0;
}