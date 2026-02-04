#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    char name[10];
    int marks;  

};

int main() {
    struct student stu1;
    stu1.roll=0001;
    strcpy(stu1.name,"Arun");
    stu1.marks=89;
    printf("Student Details\n");
    printf("---------------------\n");
    printf("Roll Number:%d\n",stu1.roll);
    printf("Name:%s\n",stu1.name);
    printf("Marks: %d \n",stu1.marks);
    return 0;
}