#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    //    capital letter       ||    small letter

    if (ch >= 65 && ch < 90 || ch >= 97 && ch < 122)
    {
        ch = ch + 1;
        printf("%c", ch);
    }

    //       Capital Z|| Small z

    else if (ch == 90 || ch == 122)
    {
        ch = ch - 25;
        printf("%c", ch);
    }
    return 0;
}