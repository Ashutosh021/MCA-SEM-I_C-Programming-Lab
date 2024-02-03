#include <stdio.h>

// Define a structure using typedef
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

// Define a union using typedef
typedef union {
    int intValue;
    float floatValue;
    char charValue;
} DataUnion;

int main() {
    // Use the typedef-defined structure
    Person person;
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter height: ");
    scanf("%f", &person.height);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n\n", person.height);

    // Use the typedef-defined union
    DataUnion data;
    printf("Enter an integer value: ");
    scanf("%d", &data.intValue);

    printf("\nDataUnion Details:\n");
    printf("Integer Value: %d\n", data.intValue);

    return 0;
}
