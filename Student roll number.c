#include <stdio.h>
#include <stdlib.h>

struct node {
    int roll;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, value, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->roll = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while(temp != NULL) {
        printf("Roll %d -> ", temp->roll);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
