#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX_SIZE - 1;
}
void push(int data) {
    if (isFull()) {
        printf("Error: Stack is full, cannot PUSH element!\n");
    } else {
        top++;
        stack[top] = data;
        printf("%d pushed to the stack.\n", data);
    }
}
void pop() {
    if (isEmpty()) {
        printf("Error: Stack is empty, cannot POP element!\n");
    } else {
        int data = stack[top];
        top--;
        printf("%d popped from the stack.\n", data);
    }
}
int peek() {
    if (isEmpty()) {
        printf("Error: Stack is empty, cannot PEEK element!\n");
        return -1;
    } else {
        return stack[top];
    }
}
int main() {
    push(20);
    push(30);
    push(40);
    printf("Top element: %d\n", peek());
    pop();
    printf("Top element after POP: %d\n", peek());
    pop();
    printf("Top element after POP: %d\n", peek());
    pop();
    printf("Top element after POP: %d\n", peek());
    return 0;
}
