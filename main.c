#include <stdio.h>

#include "second.h"

int main()
{
    int arr[SIZE];
    int size;
    printf("please enter elements of array: ");
    scanf("%d",&size);
    scan_Array(arr,size);
    sortArr(arr,size);
    printf("after sorting....\n");
    print_Array(arr,size);
    printf("Second biggest element in this arrray is:%d\n",ScondElem(arr));

    return 0;
}
