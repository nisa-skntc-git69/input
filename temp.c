#include<stdio.h>
int main(){
    float temp=50.1;
    printf("Enter Temperatuare : ");
    scanf("%f",&temp);
    if(temp>50){
        printf("It so hot");
    }else if (temp<0)
    {
    printf("It cold");
    }else{
    printf("It normal");
    } 

}
