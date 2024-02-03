#include <stdio.h>

// Define a structure for the address
struct Address {
    char street[50];
    char city[30];
    char state[30];
    char zipCode[10];
};

// Define a structure for the employee
struct Employee {
    int empId;
    char name[50];
    struct Address empAddress; // Nested structure
};

int main() {
    // Declare an employee structure variable
    struct Employee emp;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    // Input address details
    printf("Enter street: ");
    scanf("%s", emp.empAddress.street);

    printf("Enter city: ");
    scanf("%s", emp.empAddress.city);

    printf("Enter state: ");
    scanf("%s", emp.empAddress.state);

    printf("Enter zip code: ");
    scanf("%s", emp.empAddress.zipCode);

    // Display employee details including nested address structure
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.empId);
    printf("Name: %s\n", emp.name);
    printf("Address: %s, %s, %s, %s\n", emp.empAddress.street, emp.empAddress.city, emp.empAddress.state, emp.empAddress.zipCode);

    return 0;
}

