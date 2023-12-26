#include <stdio.h>

void modifyValue(int **ppValue) {
    **ppValue = 100;
}

int main() {
    int value = 42;
    int *pValue = &value;
    int **ppValue = &pValue;  

    printf("Original value: %d\n", value);

    modifyValue(ppValue);

    printf("Modified value: %d\n", value);

    return 0;
}
