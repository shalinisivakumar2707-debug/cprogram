#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int value) {
    top++;
    stack[top] = value;
    printf("The value %d pushed to array\n", value);
}

void pop() {
    top--;
}

int main() {
    push(10);

    printf("Stack has items\n");
    printf("My stack size is %d\n", top + 1);
    printf("The top value is: %d\n", stack[top]);
    pop();
    printf("My stack size is %d\n", top + 1);

    return 0;
}
