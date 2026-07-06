#include<stdio.h>
int main(){
    int score;
    printf("Enter score : ");
    scanf("%d",&score);

    if (score>=80){
        printf("Grade 4\n");
    }
    else if(score>=70){
    printf("Grade 3\n");
    }
    else if(score>=60){
    printf("Grade 2\n");
    }
    else if(score>=50){
        printf("Grade 1\n");
    }
    else {
        printf("Grade 0\n");
    }
    return 0;
}