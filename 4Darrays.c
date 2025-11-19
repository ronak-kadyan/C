#include <stdio.h>
#include <stdlib.h>

#define MAZ_SIZE 10

int main(){
    int arr[MAZ_SIZE] = {10 , 20 , 30 , 40 , 50};
    int current_size = 5;

    printf("--- 1. Access and Traversal ---\n");
    printf("Array elements:\n");
    for(int i = 0; i < current_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Element at index 2 (Access): %d\n", arr[2]);

    int search_value = 30;
    int found_index = -1;
    printf("\n--- 2. searching ---\n");
    for (int i = 0; i < current_size; i++){
        if (arr[i] == search_value){
            found_index = i;
            break;
        }
    }

    if (found_index != -1){
        printf("Value %d found at index %d\n", search_value, found_index);
    } else {
        printf("Value %d not found in the array\n", search_value);
    }

    int insert_value = 99;
    int insert_index = 2;

    printf("\n--- 3. Insertion (at index %d) ---\n", insert_index);

    if (current_size < MAZ_SIZE){
        if (insert_index >= 0 && insert_index <= current_size) {
            for (int i = current_size; i > insert_index; i--){
                arr[i] = arr[i - 1];
            }
            arr[insert_index] = insert_value;
            current_size++;

            printf("New array:\n");
            for (int i = 0; i < current_size; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else {
            printf("Invalid insert index: %d\n", insert_index);
        }
    } else {
        printf("Array is full, cannot insert new element.\n");
    }

    int delete_index = 3;

    printf("\n--- 4. Deletion (at index %d) ---\n", delete_index);

    if(delete_index >= 0 && delete_index < current_size){
        for (int i = delete_index; i < current_size - 1; i++){
            arr[i] = arr[i + 1];
        }
        current_size--;

        printf("New array after deletion:\n");
        for (int i = 0; i < current_size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index for deletion.\n");
    }
    return 0;
}