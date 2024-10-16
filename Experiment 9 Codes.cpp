//Name: - Manas Gautam
//PRN: - 23070123081
//Batch: - E&Tc {B}


//Experiment 9 A

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


//Experiment 9 B
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
