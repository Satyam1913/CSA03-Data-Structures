#include <stdio.h>
#define MAX_SIZE 100
int insertElement(int arr[], int size, int position, int element) {
    if (size >= MAX_SIZE) {
        printf("Error: Array is full. Cannot insert element.\n");
        return size;
    }
    if (position < 0 || position > size) {
        printf("Error: Invalid position to insert.\n");
        return size;
    }
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    return size + 1;
}
int deleteElement(int arr[], int size, int position) {
    if (size <= 0) {
        printf("Error: Array is empty. Cannot delete element.\n");
        return size;
    }
    if (position < 0 || position >= size) {
        printf("Error: Invalid position to delete.\n");
        return size;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}
void displayArray(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;
    do {
        printf("\nArray Operations:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert (0-indexed): ");
                scanf("%d", &position);
                size = insertElement(arr, size, position, element);
                break;
            case 2:
                printf("Enter the position to delete (0-indexed): ");
                scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    return 0;
}
