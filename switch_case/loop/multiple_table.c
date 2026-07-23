#include <stdio.h>
int main () {
    int num,i;
    scanf("%d",&num);
    for(i=1;i<13;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }

}