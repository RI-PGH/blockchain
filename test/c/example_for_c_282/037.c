#include <stdio.h>

int main() 
{
    float i, h=100, s=100;
    for(i=1; i<=9; i++) {
        h = h / 2;
        s += h * 2;
    }
    printf("the length is: %f\n", s);
    printf("after 10 times up and down the hight is: %f", h/2);
    printf("\n");
    
    return 0; 
}

