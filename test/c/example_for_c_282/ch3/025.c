#include <stdio.h>

void binary_search(int key, int a[], int n) 
{
    int low, high, mid, count=0, count1=0;
    low = 0;
    high = n - 1;
    while(low < high) {
	count++;
	mid = (low + high) / 2;
	if(key < a[mid]) {
	    high = mid - 1;
	}
       	else if(key > a[mid]) {
	    low = mid + 1;
	} 
	else if(key == a[mid]) {
	    printf("Success!\n count=%d a[%d]=%d", count, mid, key);
	    count1++;
	    break;
	}
    }
    if(count1 == 0)
	printf("failed!");
}

int main()
{
    int i, key, a[100], n;
    printf("please enter the length of array: \n");
    scanf("%d", &n);
    printf("please enter the element of array: \n");
    for(i=0; i<n; i++) {
	scanf("%d", &a[i]);
    }
    printf("please enter the element you want: \n");
    scanf("%d", &key);
    binary_search(key, a, n);
    printf("\n");

    return 0;
}
