#include <stdio.h>

int main()
{
    int a, b, c, m, t;
    printf("please enter two number:\n");
    scanf("%d%d", &a, &b);
    if(a < b) {
        t = a;
        a = b;
        b = t;
    }
    m = a * b;
    c = a % b;
    while(c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    printf("greatest common divisor is: \n%d\n", b);
    printf("least common multiple is: \n%d\n", m/b);
}

