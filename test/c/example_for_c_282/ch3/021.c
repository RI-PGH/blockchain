#include <stdio.h>

int main() {
    int i, j, t, a[11];
    printf("please enter 10 number: \n");
    for (i=1; i<11; i++) {
        scanf("%d", &a[i]);
    }

    for (i=1; i<10; i++) {
        for (j=1; j<11-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            
        }
    }
    
    printf("after rearange:\n");
    for (i=1; i<=10; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");

    return 0;
}

