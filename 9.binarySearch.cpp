#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int main() {
    int arr[] = {2,4,5,7,6,8,9,12,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Number found at index %d.\n", result);
    else
        printf("Number not found in the array.\n");
    return 0;
}
