#include <stdio.h>

int main()
{
    int i, s, k, count=-1;
    for(i=100; i<=1000; i++) {
        s = 0;
        k = i;
        while(k) {
            s = s + k % 10;
            k = k / 10;
        }
        if(s != 5) {
            continue;
        }
        else {
            count++;
            if(count%5 == 0) {
                printf("\n");
            }
            printf("%5d", i);
        }
    }
    printf("\nthe total is %d.\n", count+1);

    return 0;
}

