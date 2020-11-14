#include <stdio.h>

int main()
{
    char a;
    a = '#';
    printf("\40\40%c\n", a);
    printf("\40%c\40%c\n", a, a);
    printf("%c\40%c\40%c\n", a, a, a);

    return 0;
}

