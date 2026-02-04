#include <stdio.h>
#include <stdlib.h>
struct Node {
    int amount;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    head->amount = 1000;
    head->next = second;
    second->amount = 500;
    second->next = NULL;
    struct Node *temp = head;
    struct Node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->amount);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
