#include <stdio.h>
#include <time.h>

#define Max 11
#define N 8

int hashtable[Max];

int func(int value)
{
    return value % Max;
}

int search(int key)
{
    int pos, t;
    pos = func(key);
    t = pos;
    while(hashtable[t] != key && hashtable[t] != -1) {
        t = (t+1) % Max;
        if(pos == t) {
            return -1;
        }
    }
    if(hashtable[t] == -1) {
        return 0;
    }
    else {
        retun t;
    }
}

void creathash(int key) 
{
    int pos, t;
    pos = func(key);
    t = pos;
    while(hashtable[t] != -1) {
        t = (t+1) % Max;
        if(pos == t) {
            printf("hash table full\n");
            return ;
        }
    }
    hashtable[t] = key;
}

int main()
{
    int flag[50];
    int i, j, t;
    for(i=0; i<Max; i++) {
        hashtable[i] = -1;
    }
    for(i=0; i<50; i++) {
        flag[i] = 0;
    }
    srand((unsigned long)time(0));
    i = 0;
    while(i != N) {
        t = rand() % 50;
        if(flag[t] == 0) {
            creathash(t);
            printf("%2d:", t);
            for(j=0; j<Max; j++) {
                printf("(%2d)", hashtable[j]);
            }
            printf("\n");
            flag[t] = 1;
            i++;
        }
    }
    printf("please enter the element you want:");
    scanf("%d", &t);
    if(t>0 && t<50) {
        i = search(t);
        if(i != -1) {
            printf("success! the location is: %d\n", i);
        }
        else {
            printf("failed\n");
        }
    }
    else {
        printf("wrong input\n");
    }
}

