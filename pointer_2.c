#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;         // Pointer to x
    int **ptr_ptr = &ptr;  // Pointer to pointer ptr

    // Print address stored in ptr (address of x)
    printf("Address of x: %p\n", (void*)ptr);
    
    // Print value at address stored in ptr
    printf("Value of x: %d\n", *ptr);
    
    // Print address stored in ptr_ptr (address of ptr)
    printf("Address of ptr: %p\n", (void*)ptr_ptr);
    
    // Print value at address stored in ptr_ptr (value of ptr)
    printf("Value stored in ptr: %p\n", (void*)*ptr_ptr);
    
    // Print value pointed to by dereferencing ptr_ptr twice
    printf("Value of x through ptr_ptr: %d\n", **ptr_ptr);

    return 0;
}