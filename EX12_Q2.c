#include <stdio.h>

// Define a structure named "Employee"
struct Employee {
    char name[50];
    int empId;
    float salary;
};

int main() {
    // Declare a structure variable for an employee
    struct Employee emp;

    // Read employee details from the user
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Print the entered employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

