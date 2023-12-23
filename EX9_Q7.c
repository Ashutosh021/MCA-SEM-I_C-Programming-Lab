// What will be the output of the C program?

#include <stdio.h>
void function(char **);
int main()
{
    char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly"};
    for(int i=0;i<6;i++){
        printf("%s ",arr[i]);
    }
    function(arr);
    return 0;
}
void function(char **ptr)
{
    char *ptr1;
    ptr1 = (ptr += sizeof(int))[-2];
    printf("%s\n", ptr1);
}
