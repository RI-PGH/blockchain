#include <stdio.h>

int main()
{
    int n, k=1, s=0, m, c=-1;
    printf("result is:");
    for(n=11; n<100; n++) {
        k = 1;
        s = 0;
        m = n;
        while(m) {
            k *= m % 10;
            s += m % 10;
            m /= 10;
        }
        if(k > s) {
            c++;
            if(c%5 == 0) {
                printf("\n");
            }
            printf("%5d", n);
        }
    }
    printf("\n");
}

