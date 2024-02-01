//  Write C program to read file using fgetc(), fgets(),and fscanf() functions.

#include <stdio.h>
int main() {
    // File pointers
    FILE *fileFgetc, *fileFgets, *fileFscanf;
    // Open the file for reading using fgetc
    fileFgetc = fopen("fgetc_example.txt", "r");
    if (fileFgetc == NULL) {
        printf("Error opening file for fgetc");
        return 1;
    }
    // Read the file character by character using fgetc
    printf("Reading file using fgetc:\n");
    int character;
    while ((character = fgetc(fileFgetc)) != EOF) {
        putchar(character);
    }
    // Close the file
    fclose(fileFgetc);
    printf("\n\n");
    // Open the file for reading using fgets
    fileFgets = fopen("fgets_example.txt", "r");
    if (fileFgets == NULL) {
        perror("Error opening file for fgets");
        return 1;
    }
    // Read the file line by line using fgets
    printf("Reading file using fgets:\n");
    char line[100];
    while (fgets(line, sizeof(line), fileFgets) != NULL) {
        printf("%s", line);
    }
    // Close the file
    fclose(fileFgets);
    printf("\n\n");
    // Open the file for reading using fscanf
    fileFscanf = fopen("fscanf_example.txt", "r");
    if (fileFscanf == NULL) {
        perror("Error opening file for fscanf");
        return 1;
    }

    // Read the file using fscanf
    printf("Reading file using fscanf:\n");
    int intValue;
    float floatValue;
    while (fscanf(fileFscanf, "%d %f", &intValue, &floatValue) == 2) {
        printf("Integer: %d, Float: %.2f\n", intValue, floatValue);
    }

    // Close the file
    fclose(fileFscanf);

    return 0;
}
