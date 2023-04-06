#include<stdio.h>

int main()
{
    int a;
    long long int b;
    float c;
    char ch;

    scanf("%d %lld %f %c", &a, &b, &c, &ch);


    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%0.2f\n", c);
    printf("%c\n", ch);

    return 0;
}
