#include <stdio.h>
void fibonacci(int n) {
    int prev = 0;
    int curr = 1;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", prev);
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    fibonacci(n);
    return 0;
}
