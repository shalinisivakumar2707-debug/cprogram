#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product {
    char name[20];
    int price;
};

struct order {
    int orderID;
    struct product p;
    char status[15];
    struct order *next;
};

int main() {
    struct order *head, *o1, *o2;

    o1 = (struct order*)malloc(sizeof(struct order));
    o2 = (struct order*)malloc(sizeof(struct order));

    o1->orderID = 201;
    strcpy(o1->p.name, "Mouse");
    o1->p.price = 500;
    strcpy(o1->status, "Delivered");
    o1->next = o2;

    o2->orderID = 202;
    strcpy(o2->p.name, "Keyboard");
    o2->p.price = 1500;
    strcpy(o2->status, "Pending");
    o2->next = NULL;

    head = o1;

    while(head != NULL) {
        printf("%d %s %d %s -> ",
               head->orderID,
               head->p.name,
               head->p.price,
               head->status);
        head = head->next;
    }
    printf("NULL");

    return 0;
}
