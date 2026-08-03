#include <stdio.h>

int main()
{
    int fish[5] = {30, 60, 52, 70, 100};
    int tomato[5] = {20, 20, 33, 50, 200};
    int day = 0;
    int can, fish_left, tomato_left;

    while (day < 5)
    {
        can = fish[day] / 3;

        if (tomato[day] / 2 < can)
        {
            can = tomato[day] / 2;
        }

         can = fish[day] / 3;

        if (tomato[day] / 2 < can)
        {
            can = tomato[day] / 2;
        }

        fish_left = fish[day] - (can * 3);
        tomato_left = tomato[day] - (can * 2);

        printf("Day %d\n", day + 1);
        printf("Cans = %d\n", can);
        printf("Fish left = %d\n", fish_left);
        printf("Tomato left = %d\n\n", tomato_left);
        day++;
    }

    return 0;
}