#include <stdio.h>

int bin_dec(int x, int n)
{
    if(n == 0) {
        return 1;
    }
    return x * bin_dec(x, n-1);
}

int main() 
{
    int i;
    int ip[4] = {0};

