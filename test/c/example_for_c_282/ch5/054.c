#include <stdio.h>

int main()
{
    int i, a, b;
    for(i=1000; i<10000; i++)
    {
        a = i / 100;
        b = i % 100;
        if((a+b)*(a+b) == i) {
            printf("\n%5d", i);
        }
    }
    printf("\n");

    return 0;
}

