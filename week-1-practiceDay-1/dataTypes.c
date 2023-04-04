#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int summation = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    float division = (a * 1.00) / b;

    printf("a + b = ");
    printf("%d\n", summation);

    printf("a - b = ");
    printf("%d\n", subtraction);

    printf("a * b = ");
    printf("%d\n", multiplication);

    printf("a / b = ");
    printf("%0.2f\n", division);
    return 0;
}