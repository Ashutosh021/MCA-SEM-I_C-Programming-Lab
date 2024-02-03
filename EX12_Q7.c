
#include <stdio.h>

// Define a structure named "Person"
struct Person {
    char name;
    int age;
    float height;
};

// Define a union named "DataUnion"
union DataUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Structure example
    printf("Structure Example:\n");
    struct Person person;
    printf("Size of Person structure: %d bytes\n", sizeof(struct Person));
    printf("Size of name: %d bytes\n", sizeof(person.name));
    printf("Size of age: %d bytes\n", sizeof(person.age));
    printf("Size of height: %d bytes\n\n", sizeof(person.height));

    // Union example
    printf("Union Example:\n");
    union DataUnion data;
    printf("Size of DataUnion union: %d bytes\n", sizeof(union DataUnion));
    printf("Size of intValue: %d bytes\n", sizeof(data.intValue));
    printf("Size of floatValue: %d bytes\n", sizeof(data.floatValue));
    printf("Size of charValue: %d bytes\n", sizeof(data.charValue));

    return 0;
}