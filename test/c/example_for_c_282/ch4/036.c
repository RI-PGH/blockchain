#include <stdio.h>
#include <string.h>

int main()
{
    long t1;
    int i, n, t, t3;
    char a[100];
    printf("please enter number: \n");
    gets(a);
    strupr(a);
    t3 = strlen(a);
    t1 = 0;
    printf("please enter system n (2 or 8 or 16): \n");
    scanf("%d", &n);
    for(i=0; i<t3; i++) {
        if(a[i] - '0' >= n && a[i] < 'A' || a[i] -'A' + 10 >= n) {
            printf("wrong input!!");
            exit(0);
        }
        if(a[i]>='0' && a[i]<='9') {
            t = a[i] - '0';
        }
        else if(n>=11 && (a[i]>='A'&&a[i]<='A'+n-10)) {
            t = a[i] - 'A' + 10;
        }
        t1 = t1 * n + t;
    }
    printf("otcal number is:%ld\n", t1);
}

