#include <stdio.h>

// Define a structure for the student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1 = {"John Doe", 101, 85.5};

    // Declare a pointer to the structure
    struct Student *ptrStudent;

    // Assign the address of the structure variable to the pointer
    ptrStudent = &student1;

    // Access and print structure members using the pointer
    printf("Student Details:\n");
    printf("Name: %s\n", ptrStudent->name);
    printf("Roll Number: %d\n", ptrStudent->rollNumber);
    printf("Marks: %.2f\n", ptrStudent->marks);

    return 0;
}

