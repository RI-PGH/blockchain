#include <stdio.h>

int main()
{
    int x;
    printf("please enter a number:\n");
    scanf("%d", &x);
    if(x%5==0 && x%7==0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    
    return 0;
}

