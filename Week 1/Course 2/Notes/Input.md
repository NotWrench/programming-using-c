### **Short Note on `scanf()`**

The `scanf()` function in C is used to take formatted input from the user via the standard input. It reads and assigns values to variables based on format specifiers.  

---

### **Key Points**:
- Syntax: `scanf("format string", &argument_list);`
- **Ampersand (`&`)** is used to pass the memory address of the variable to store the input.
- Format specifiers (like `%d`, `%f`, `%c`, `%s`) determine the data type of the input.
- Does not automatically handle spaces for `char` and `string`; special handling may be needed for whitespace inputs.

---

### **Example:**
```c
#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in feet: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to handle newline

    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

### **Explanation:**
1. **`%d`**: Reads an integer and stores it in `age`.  
2. **`%f`**: Reads a float and stores it in `height`.  
3. **`%c`**: Reads a single character and stores it in `grade`.  
   - The space before `%c` ensures that any leftover newline (`\n`) from previous input is ignored.

---

### **Sample Output:**
```
Enter your age: 25
Enter your height in feet: 5.9
Enter your grade: A

You entered:
Age: 25
Height: 5.9 feet
Grade: A
```
