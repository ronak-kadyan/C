#include <stdio.h>

int main(){
    int arr[] = {10, 20 ,30 ,40};
    int *ptr = arr;

    printf("--- Initial State ---\n");
    printf("base address (arr): %p\n", (void*)arr);
    printf("value at *ptr: %d\n", *ptr);

    ptr = ptr + 2;

    printf("\n --- after ptr = ptr + 2 ---\n");
    printf("New address (ptr): %p\n", (void*)ptr);
    printf("NEw value (*ptr): %d\n", *ptr);

    int *ptr_start = arr;
    int *ptr_end = &arr[3];

    long difference = ptr_end - ptr_start;

    printf("\n--- Pointer Difference ---\n");
    printf("elements between arr[0] and arr[3]; %ld\n", difference);

    return 0;
}