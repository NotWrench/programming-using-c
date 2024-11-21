// BEFORE YOU START: Please check out format_specifiers.c
#include <stdio.h>

int main()
{
    // Declaring the necessary variables for us
    char a;
    int b;
    float c;

    /*
        This is where the fun begins:
        To input something from the user, we will use the help of scanf() function from the stdio
    */
    scanf("%c", &a); // This line inputs a character value form the user and stores it in the variable "a"
    scanf("%d", &b); // This line inputs an integer value from the user and stores it in the variable "b"
    scanf("%f", &c); // This line inputs a floating value from the user and stores it in the variable "c"
    /*
        If we look at the above 3 scanf() statements, we would have used "&<variable_name>"
        What is the use of this "&"? Let's find out:
        The & is used in scanf() to provide the memory address of the variable so the function can store the input value directly into that location.
        You don't have to use "&" for strings and arrays (Just remember this, will explain in detail in later courses)
    */

    // Then we will print the inputted values to the standard output
    printf("Character: %c\nInteger: %d\nFloating: %f", a, b, c);
}
