#include <stdio.h>
int main(){
    int number[5] = {10,20,30,40,5};
    int i,max,min;
    max = number[0];
    min = number[0];
    
    for(i=0;i<5;i++)
    {
     printf("number[%d] : %d \n",i,number[i]);
        if(number[i] >max)
        max =number[i];
        if(number[i] <min)
        min =number[i];
    }
        printf("\n maximum number is= %d \n" ,max);
        printf("\n minimum number is= %d \n" ,min);
        return 0;
    }
