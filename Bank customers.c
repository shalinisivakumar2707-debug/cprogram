#include <stdio.h>
#include <stdlib.h>

struct contact {
    long long phone;
};

struct customer {
    int accNo;
    struct contact c;
    struct customer *next;
};

int main() {
    struct customer *head, *c1, *c2;

    c1 = (struct customer*)malloc(sizeof(struct customer));
    c2 = (struct customer*)malloc(sizeof(struct customer));

    c1->accNo = 101;
    c1->c.phone = 9876543210;
    c1->next = c2;

    c2->accNo = 102;
    c2->c.phone = 9123456789;
    c2->next = NULL;

    head = c1;

    while(head != NULL) {
        printf("%d - %lld -> ", head->accNo, head->c.phone);
        head = head->next;
    }
    printf("NULL");

    return 0;
}
