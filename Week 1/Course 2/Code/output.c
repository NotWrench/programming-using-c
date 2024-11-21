#include <stdio.h>

int main()
{
    // Declaring a variable named "a" with type character (char) with a value of 'A'
    char a = 'A';
    // Declaring a variable named "b" with type integer (int) with a value of 20
    int b = 20;
    // Don't worry about the variable stuff, we will cover it in upcoming course

    /*
        The printf() function takes multiple arguments, the first one is passed as a string
        Note: A string is anything which starts with double quotes ("This is a string")
    */
    printf("Hello World!\n"); // This prints Hello World! to the standard output
    
    /*
        If you look closely at this line below we used something like "%c" which is called a format specifier.
        You can look more about it in the format_specifiers.c
        This will produce an output like "A for Apple"  
    */
    printf("%c for Apple\n", a);
    
    /*
        This will produce an output like "20 for a charm" 
    */
    printf("%d for a charm", b);

    return 0;
}
