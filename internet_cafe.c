#include <stdio.h>
int main(){
    int money, time, sum;
    printf("money: ");
    scanf("%d", &money);  //15
    printf("hour: ");
    scanf("%d", &time); //50
    sum = money * time;
    printf("price = %d\n",sum);
    return 0;
}