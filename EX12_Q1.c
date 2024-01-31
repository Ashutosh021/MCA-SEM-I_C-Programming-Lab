#include <stdio.h>
#include<string.h>

// Define a structure named "Person"                                                                                                                                                                                                                                                                                                                                                                                     
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"John Doe", 25, 175.5};

    // Access and print the values of the structure members
    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    // Declare another structure variable and initialize it separately
    struct Person person2;
    // Assign values to the members of the structure
    strcpy(person2.name, "Jane Smith");
    person2.age = 30;
    person2.height = 160.0;

    // Access and print the values of the second structure
    printf("\nAnother Person Information:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f\n", person2.height);

    return 0;
}
