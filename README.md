# Experiment-9
## Theory: - 
### **Pointers in C++: A Brief Overview**

#### **What is a Pointer?**
A **pointer** is a variable that stores the **memory address** of another variable. Instead of holding a value directly, it "points" to the location where the value is stored in memory. Pointers are one of the most powerful features in C++ because they enable low-level memory manipulation and dynamic memory management.

---

### **Key Concepts**

1. **Declaring a Pointer:**
   - To declare a pointer, use the `*` operator along with the data type it will point to.  
     ```cpp
     int* ptr;  // Pointer to an integer
     float* fptr;  // Pointer to a float
     char* cptr;  // Pointer to a char
     ```

2. **Initializing a Pointer:**
   - A pointer must be initialized with the **address** of a variable using the `&` operator.
     ```cpp
     int var = 10;
     int* ptr = &var;  // ptr now stores the address of var
     ```

3. **Dereferencing a Pointer:**
   - The `*` operator is used to access the value at the memory address stored by the pointer (known as **dereferencing**).
     ```cpp
     cout << *ptr;  // Outputs the value of var (10)
     ```

4. **Pointer to Null:**
   - A pointer that doesn’t point to any memory location is set to `nullptr` (or `NULL` in older C++ versions).
     ```cpp
     int* ptr = nullptr;  // Pointer is not initialized
     ```

5. **Pointer Arithmetic:**
   - You can perform arithmetic on pointers to move between consecutive memory locations of the same type.
     ```cpp
     ptr++;  // Move to the next integer location in memory
     ```

---

### **Advantages of Pointers**

1. **Dynamic Memory Allocation** – Pointers are used with `new` and `delete` operators to allocate and deallocate memory dynamically.
2. **Passing by Reference** – Allows functions to modify variables in the calling function by passing their addresses.
3. **Efficient Array Handling** – Arrays can be efficiently manipulated using pointers.
4. **Data Structures** – Used to create dynamic data structures like linked lists, trees, and graphs.

---

### **Simple Example of Pointers in C++**

Here’s a complete example demonstrating the basics of pointers with `int`, `float`, and `char` data types:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int intVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';

    // Declare and initialize pointers to these variables
    int* intPtr = &intVar;
    float* floatPtr = &floatVar;
    char* charPtr = &charVar;

    // Displaying values using pointers (Dereferencing)
    cout << "Integer value: " << *intPtr << endl;
    cout << "Float value: " << *floatPtr << endl;
    cout << "Char value: " << *charPtr << endl;

    // Displaying addresses stored in pointers
    cout << "Address of intVar: " << intPtr << endl;
    cout << "Address of floatVar: " << floatPtr << endl;
    cout << "Address of charVar: " << static_cast<void*>(charPtr) << endl;

    return 0;
}
```

---

### **Explanation of the Example**

1. **Variables Declaration and Initialization:**  
   We declare three variables: `intVar`, `floatVar`, and `charVar`.

2. **Pointers Declaration and Initialization:**  
   Each pointer is initialized with the address of a corresponding variable using the `&` operator.

3. **Printing Values Using Dereferencing:**  
   The `*` operator is used to access the values stored in the memory locations pointed to by the pointers.

4. **Printing Addresses Stored in Pointers:**  
   The pointers store the **addresses** of the variables, which are printed directly.

---

### **Output Example**

```
Integer value: 10
Float value: 3.14
Char value: A
Address of intVar: 0x7ffcbf482d3c
Address of floatVar: 0x7ffcbf482d40
Address of charVar: 0x7ffcbf482d44
```

---

# Experiment{9A}: - Declare and initialize pointers of different data types and print the following values (Repeat for float and char data types)

Code: - 

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int intVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';

    // Declare and initialize pointers to these variables
    int* intPtr = &intVar;
    float* floatPtr = &floatVar;
    char* charPtr = &charVar;

    // Printing the values and addresses for int
    cout << "Integer Value: " << *intPtr << endl;
    cout << "Integer Address: " << intPtr << endl;

    // Printing the values and addresses for float
    cout << "Float Value: " << *floatPtr << endl;
    cout << "Float Address: " << floatPtr << endl;

    // Printing the values and addresses for char (with casting to void*)
    cout << "Char Value: " << *charPtr << endl;
    cout << "Char Address: " << static_cast<void*>(charPtr) << endl;

    return 0;
}


# Output: - 

   ![image](https://github.com/user-attachments/assets/9f505a24-d0bb-4c34-8bfd-d0c52467c3ef)

#  Experiment{9B}: - Access array using pointer and without using pointer variable.

## Code: -
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // pointer pointing to the first element of array

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // accessing array elements using pointer
    }

    return 0;
}

## Output: - 

![image](https://github.com/user-attachments/assets/38c52c55-8aa6-408a-90ec-5e3029be058e)



