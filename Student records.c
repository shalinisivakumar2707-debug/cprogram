#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct details {
    char name[20];
    char dept[10];
};

struct student {
    int roll;
    struct details d;
    struct student *next;
};

int main() {
    struct student *head, *s1, *s2;

    s1 = (struct student*)malloc(sizeof(struct student));
    s2 = (struct student*)malloc(sizeof(struct student));

    s1->roll = 1;
    strcpy(s1->d.name, "Arun");
    strcpy(s1->d.dept, "CSE");
    s1->next = s2;

    s2->roll = 2;
    strcpy(s2->d.name, "Meena");
    strcpy(s2->d.dept, "IT");
    s2->next = NULL;

    head = s1;

    while(head != NULL) {
        printf("%d %s %s -> ", head->roll, head->d.name, head->d.dept);
        head = head->next;
    }
    printf("NULL");

    return 0;
}
