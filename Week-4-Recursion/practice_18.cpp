/* implement strlen(). strcat() and strcmp() recursively */

#include <bits/stdc++.h>
using namespace std;

// '\0' null character

int my_strlen(const char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + my_strlen(s + 1);
}

void my_strcat(char *dst, const char *src)
{
    if (*dst == '\0')
    {
        if (*src == '\0')
        {
            *dst = '\0';
            return;
        }
        *dst = *src;
        my_strcat(dst + 1, src + 1);
        return;
    }
    my_strcat(dst + 1, src);
}

int my_strcmp(const char *s1, const char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return 1;
    if (*s1 == '\0' || *s2 == '\0')
        return 0;
    if (*s1 != *s2)
        return 0;
    return my_strcmp(s1 + 1, s2 + 1);
}

int main()
{
    char s1[20] = "Hello";
    char s2[] = " World";

    cout << "String length of s1: " << my_strlen(s1) << endl;
    cout << "String length of s2: " << my_strlen(s2) << endl;

    my_strcat(s1, s2);
    cout << "After concatenation: " << s1 << endl;

    cout << "Compare \"abc\" & \"abc\": " << my_strcmp("abc", "abc") << endl;
    cout << "Compare s1 & s2: " << my_strcmp(s1, s2) << endl;

    return 0;
}