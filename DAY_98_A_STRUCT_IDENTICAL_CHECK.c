/*Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNo;
    int marks;
};
int main() {
    struct Student student1, student2;
    int identical = 1;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll No: ");
    scanf("%d", &student1.rollNo);
    printf("Marks: ");
    scanf("%d", &student1.marks);

    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll No: ");
    scanf("%d", &student2.rollNo);
    printf("Marks: ");
    scanf("%d", &student2.marks);

    if (strcmp(student1.name, student2.name) != 0 ||
        student1.rollNo != student2.rollNo ||
        student1.marks != student2.marks) {
        identical = 0;
    }

    if (identical) {
        printf("\nSame\n");
    } else {
        printf("\nNot Same\n");
    }

    return 0;
}