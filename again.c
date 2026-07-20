#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ans='Y';
    while (ans == 'Y')
    {
        int num, i;
        scanf("%d", &num);
        for (i = 1; i < 13; i++)
        {
            printf("%d X %d = %d \n", num, i, num * i);
        }
        printf("Do you want to continue ? [Y/N] :");
        scanf("%c", &ans);
        ans=getchar();
        printf("Restart Program");
        getchar();
        system("cls");
    }
    printf("Bye Bye");
}