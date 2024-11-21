# Notes

### **Short Notes on Format Specifiers in C**
Format specifiers in C are placeholders used in functions like `printf()` and `scanf()` to represent the type of data being processed. Each format specifier corresponds to a specific data type.

---

### **Common Format Specifiers and Examples**

1. **`%d` - Integer**  
   **Example:**  
   ```c
   int a = 10;
   printf("Value of a: %d\n", a);
   ```  
   **Explanation:**  
   `%d` is used to print an integer value. Here, it replaces `%d` with `10` during execution.

2. **`%f` - Floating-point**  
   **Example:**  
   ```c
   float b = 3.14;
   printf("Value of b: %f\n", b);
   ```  
   **Explanation:**  
   `%f` outputs floating-point values. `3.14` is printed in decimal notation.

3. **`%c` - Character**  
   **Example:**  
   ```c
   char d = 'A';
   printf("Value of d: %c\n", d);
   ```  
   **Explanation:**  
   `%c` prints a single character. Here, `A` replaces `%c`.

4. **`%p` - Pointer**  
   **Example:**  
   ```c
   int h = 42;
   printf("Address of h: %p\n", &h);
   ```  
   **Explanation:**  
   `%p` prints the memory address of the variable. It shows the pointer address of `h`.

---

### **Key Notes**
- Each specifier is case-sensitive (e.g., `%d` ≠ `%D`).
- Mismatched format specifiers and data types can cause undefined behavior.
- Combining precision specifiers (e.g., `%.2f`) can control output formatting.  

Here’s an example to illustrate **precision** in format specifiers:

---

### **Example with `%.2f`**
```c
#include <stdio.h>

int main() {
    float num = 123.4567;

    printf("Formatted output: %.2f\n");
    return 0;
}
```

---

### **Explanation**
1. **Precision (`.2`)**:  
   Limits the number of digits after the decimal point to 2. The value `123.4567` will be rounded to `123.46`.

---

### **Output**
```
Formatted output: 123.46
```
