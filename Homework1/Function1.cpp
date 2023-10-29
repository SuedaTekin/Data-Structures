#include <stdio.h>
#include <stdlib.h>

void addOddEvenToList() {
    int* list = NULL;
    int size = 0;
    int capacity = 0;
    int num;

    while (1) {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (size >= capacity) {
            // If the array is full, double its capacity
            capacity = (capacity == 0) ? 1 : capacity * 2;
            list = (int*)realloc(list, capacity * sizeof(int));
            if (list == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
        }

        if (num % 2 == 1) {
            // Add odd numbers to the beginning of the list
            for (int i = size; i > 0; i--) {
                list[i] = list[i - 1];
            }
            list[0] = num;
        } else {
            // Add even numbers to the end of the list
            list[size] = num;
        }

        size++;
    }

    printf("Resulting list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    free(list);  // Don't forget to free the dynamically allocated memory
}

int main() {
    addOddEvenToList();
    return 0;
}

