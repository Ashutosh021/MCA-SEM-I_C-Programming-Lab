#include <stdio.h>

// Define a structure of arrays named "Person"
struct Person {
    char name[50];
    int age[3]; // An array to store the age for the past three years
    float salary[3]; // An array to store the salary for the past three years
};

int main() {
    // Declare an array of structures
    struct Person employees[3];

    // Input data for each employee
    for (int i = 0; i < 3; ++i) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        for (int j = 0; j < 3; ++j) {
            printf("Enter age for year %d: ", j + 1);
            scanf("%d", &employees[i].age[j]);

            printf("Enter salary for year %d: ", j + 1);
            scanf("%f", &employees[i].salary[j]);
        }
    }

    // Print the entered data
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);

        for (int j = 0; j < 3; ++j) {
            printf("Year %d - Age: %d, Salary: %.2f\n", j + 1, employees[i].age[j], employees[i].salary[j]);
        }
        printf("\n");
    }

    return 0;
}

