// Write C program to write data into any file using fputc(), gputs(), and fprintf() functions
#include <stdio.h>

int main() {
    // File pointers
    FILE *fileFputc, *fileFputs, *fileFprintf;

    // Open the file for writing using fputc
    fileFputc = fopen("fputc_example.txt", "w");
    // Write data to the file using fputc
    printf("Writing data to file using fputc:\n");
    char dataFputc[] = "Hello, this is fputc example!";
    for (int i = 0; dataFputc[i] != '\0'; ++i) {
        fputc(dataFputc[i], fileFputc);
    }

    // Close the file
    fclose(fileFputc);
    printf("Data written successfully using fputc.\n\n");

    // Open the file for writing using fputs
    fileFputs = fopen("fputs_example.txt", "w");
    // Write data to the file using fputs
    printf("Writing data to file using fputs:\n");
    char dataFputs[] = "Hello, this is fputs example!";
    fputs(dataFputs, fileFputs);

    // Close the file
    fclose(fileFputs);
    printf("Data written successfully using fputs.\n\n");

    // Open the file for writing using fprintf
    fileFprintf = fopen("fprintf_example.txt", "w");
    // Write data to the file using fprintf
    printf("Writing data to file using fprintf:\n");
    int intValue = 42;
    float floatValue = 3.14;
    fprintf(fileFprintf, "Integer: %d, Float: %.2f\n", intValue, floatValue);

    // Close the file
    fclose(fileFprintf);
    printf("Data written successfully using fprintf.\n");

    return 0;
}
