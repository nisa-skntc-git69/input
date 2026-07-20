#include <stdio.h>
int main()
{
    int can;

    // Day 1
    int fish1 = 30;
    int tomato1 = 20;

    can = fish1 / 3;
    if (tomato1 / 2 < can)
        can = tomato1 / 2;

    fish1 = fish1 - (can * 3);
    tomato1 = tomato1 - (can * 2);

    printf("Day 1\n");
    printf("Cans = %d\n", can);
    printf("Fish left = %d\n", fish1);
    printf("Tomato left = %d\n\n", tomato1);


    // Day 2
    int fish2 = 60;
    int tomato2 = 20;

    can = fish2 / 3;
    if (tomato2 / 2 < can)
        can = tomato2 / 2;

    fish2 = fish2 - (can * 3);
    tomato2 = tomato2 - (can * 2);

    printf("Day 2\n");
    printf("Cans = %d\n", can);
    printf("Fish left = %d\n", fish2);
    printf("Tomato left = %d\n\n", tomato2);


    // Day 3
    int fish3 = 52;
    int tomato3 = 33;

    can = fish3 / 3;
    if (tomato3 / 2 < can)
        can = tomato3 / 2;

    fish3 = fish3 - (can * 3);
    tomato3 = tomato3 - (can * 2);

    printf("Day 3\n");
    printf("Cans = %d\n", can);
    printf("Fish left = %d\n", fish3);
    printf("Tomato left = %d\n\n", tomato3);


    // Day 4
    int fish4 = 70;
    int tomato4 = 50;

    can = fish4 / 3;
    if (tomato4 / 2 < can)
        can = tomato4 / 2;

    fish4 = fish4 - (can * 3);
    tomato4 = tomato4 - (can * 2);

    printf("Day 4\n");
    printf("Cans = %d\n", can);
    printf("Fish left = %d\n", fish4);
    printf("Tomato left = %d\n\n", tomato4);


    // Day 5
    int fish5 = 100;
    int tomato5 = 200;

    can = fish5 / 3;
    if (tomato5 / 2 < can)
        can = tomato5 / 2;

    fish5 = fish5 - (can * 3);
    tomato5 = tomato5 - (can * 2);

    printf("Day 5\n");
    printf("Cans = %d\n", can);
    printf("Fish left = %d\n", fish5);
    printf("Tomato left = %d\n", tomato5);

    return 0;
}

