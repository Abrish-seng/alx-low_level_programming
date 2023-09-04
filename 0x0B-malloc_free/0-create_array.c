#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL; // Return NULL if size is 0
    }

    char *array = (char *)malloc(size * sizeof(char)); // Allocate memory for the array

    if (array == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c; // Initialize each element with the specified char
    }

    return array;
}

int main() {
    unsigned int size = 10;
    char c = 'A';
    
    char *result = create_array(size, c);

    if (result != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result[i]); // Print the elements of the array
        }
        printf("\n");
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Array creation failed.\n");
    }

    return 0;
}

