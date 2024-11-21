### **Short Notes on printf()**

The `printf()` function in C is used to format and print data to the standard output (typically the console). It allows displaying various data types like integers, floats, characters, and strings using format specifiers.  

---

### **Key Points**:
- Syntax: `printf("format string", argument_list);`
- Format specifiers control how the data is formatted and displayed.
- It can include escape sequences (e.g., `\n` for newlines) for formatting text.

---

### **Example:**
```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

### **Explanation:**
- **`%d`**: Prints the integer value of `age`.  
- **`%.1f`**: Prints the float value of `height` rounded to 1 decimal place.  
- **`%c`**: Prints the character `grade`.  

---

### **Output:**
```
Age: 25 years
Height: 5.9 feet
Grade: A
```
