#include <stdio.h>

int main()
{
    /*
        Some common format specifiers:
        %d - Used for printing and scanning integers (e.g., int).
        %f - Used for printing and scanning floating-point numbers (e.g., float).
        %c - Used for printing and scanning single characters (e.g., char).
        %p - Used for printing pointers (memory addresses).
    */
   // Declaring the necessary variables
   char a = 'A';
   int b = 20;
   float c = 5.76;

   // Printing them in the standard output
   printf("Character: %c\nInteger: %d\nFloating: %f\nMemory address of a: %p", a, b, c, a);
}
