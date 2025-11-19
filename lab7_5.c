 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 // Define Book structure
 struct Book {
    char title[50];
    char author[30];
    float price;
 };
 int main() {
    int n = 2;
    // Dynamically allocate memory for array of structures
    struct Book *library = (struct Book*)malloc(n * sizeof(struct Book));
    // Initialize first book
    strcpy(library[0].title, "C Programming");
    strcpy(library[0].author, "Dennis Ritchie");
    library[0].price = 450.50;
    // Initialize second book
    strcpy(library[1].title, "Data Structures");
    strcpy(library[1].author, "Yedidyah Langsam");
    library[1].price = 520.75;
    // Display all books
    printf("Library Inventory:\n");
    for(int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: Rs.%.2f\n", library[i].price);
    }
    // Free allocated memory
    free(library);
    return 0;
 }