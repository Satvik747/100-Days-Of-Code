/*Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, readEmp;
    FILE *fp;
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name   : %s\n", readEmp.name);
    printf("ID     : %d\n", readEmp.id);
    printf("Salary : %.2f\n", readEmp.salary);
    return 0;
}
