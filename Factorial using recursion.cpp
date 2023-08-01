#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    int result = factorial(number);
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}
