#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, sign, max;
    char signl;
    printf("please choose operator (1 or other, 1:-, other:+): \n");
    scanf("%d", &sign);
    printf("please choose the max number (<10000); \n");
    scanf("%d", &max);
    srand((unsigned long)time(0));
    a = rand() % max;
    b = rand() % max;
    while((a<b) && (sign==1)) {
        a = rand() % max;
        b = rand() % max;
    }
    signl = (sign==1 ? '-':'+');
    printf("\n%d%c%d=", a, signl, b);
    scanf("%d", &c);
    if((sign==1) && (a-b==c) || (sign!=1) && (a+b==c)) {
        printf("right\n");
    }
    else {
        printf("wrong\n");
    }

    return 0;
}

