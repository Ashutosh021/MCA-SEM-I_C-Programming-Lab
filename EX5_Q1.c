#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r)
{
    int ncr;
    if (n < r)
    {
        printf("\nn should be grater than or equal to r");
    }
    else
    {
        int deno = factorial(r) * factorial(n - r);
        ncr = factorial(n) / deno;
        return ncr;
    }
}
int nPr(int n, int r)
{
    int npr;
    if (n < r)
    {
        printf("\nn should be grater than or equal to r");
    }
    else
    {
        npr = factorial(n) / factorial(n - r);
        return npr;
    }
}

    char to_upper(char ch){
        return (ch+32);
    }
    char to_lower(char ch){
        return (ch-32);
    }

    void check_char(char ch){
        if(ch>='a' && ch<='z'){
            printf("\nCharacter is lowerCase");
        }
        else if(ch>='A' && ch<='Z'){
            printf("\nCharacter is upperCase");
        }
        else if(ch>=0 && ch<=9){
            printf("\nCharacter is Digit");
        }
    }

    void is_alphabet(char ch){
        if((ch>='a' && ch<='z' )||( ch>='A' && ch<='Z')){
            printf("\nCharacter is Alphabet");
        }
        else{
            printf("\nCharacter is Not Alphabet");
        }
    }
int main()
{
    printf("nCr = %d", nCr(5, 2));
    printf("\nnPr = %d",nPr(5,3));
    printf("\nIn Lower = %c", to_lower('b'));
    printf("\nIn Upper = %c", to_upper('D'));
    check_char('B');
    check_char('v');
    check_char(7);
    is_alphabet('g');
    return 0;
}
