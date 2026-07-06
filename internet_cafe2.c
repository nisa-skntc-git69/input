#include <stdio.h>
int main()
{
int hours= 2;
int month= 30;
int WithoutSub =hours* month *15;
int Discount =hours* month *15 * 0.10;
int SubCost = 100;

printf("without subscription cost: %d\n", WithoutSub);
printf("with subscription cost: %d\n", WithoutSub - Discount + SubCost);
printf("Ton Shouldn't buying subscription");
}