# Notes

## Header file:
```c
#include <file_name.h> // Importing
```
- Header files add functionality to C programs.
- They are used to import libraries.
### Example:
```c
#include <stdio.h> // Imports the standard input/ouput functions.
```

## Syntax for main function:
```c
int main()
{
    // statement(s)
}
```

- A main function always returns an int data type.
- If the returned value is 0, it means the code executed without any errors.
- If the returned value is 1, it means the code executed with some errors.

### Example:
```c
int main() {
  printf("Hello World!"); // Outputs "Hello World!" to the standard output
  return 0;
}
```