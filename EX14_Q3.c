// Write C program to copy character or binary file
#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[50], destinationFileName[50];
    char character;
    // Input source file name
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file for reading
    sourceFile = fopen(sourceFileName, "rb");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }
    // Input destination file name
    printf("Enter destination file name: ");
    scanf("%s", destinationFileName);

    // Open the destination file for writing
    destinationFile = fopen(destinationFileName, "wb");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
