#include <stdio.h>
int main()
{
    int hourA, hourB;
    float payA, payB;

    printf("50 A : ");
    scanf("%d", &hourA);

    printf("50 B : ");
    scanf("%d", &hourB);

    payA = hourA * 15;
    payB = (hourB * 15 * 0.9) + 100;

    printf("cost A = %.2f Bath\n", payA);
    printf("cost B = %.2f Bath\n", payB);

    if (payA > payB)
        printf("A pay more B");
    else if (payB > payA)
        printf("B pay more A");
    else
        printf("A and B pay same");
    return 0;
}