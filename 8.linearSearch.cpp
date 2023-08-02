#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("The number %d was found at index %d.\n", target, index);
    } else {
        printf("The number %d was not found in the array.\n", target);
    }
    return 0;
}
