#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode;
    int i, value;

    for(i = 0; i < 3; i++) {
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }

    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");

    return 0;
}
