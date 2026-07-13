#include <stdio.h>
int main() {
    int tomato=35;
    int plete =0;
    scanf("%d",&tomato);
    for(int i =tomato; i>=3; i = i -3){
        plete++;
        tomato=tomato-3;
    }
        printf("Result: %d plete\n",plete);
        printf("left: %d tomato\n",tomato);
}