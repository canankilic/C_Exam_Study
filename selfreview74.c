#include <stdio.h>

int main() {
    float number1 = 7.3;
    float number2;

    // a) Define the variable fPtr to be a pointer to an object of type float.
    float *fPtr;

    // b) Assign the address of variable number1 to pointer variable fPtr.
    fPtr = &number1;

    // c) Print the value of the object pointed to by fPtr.
    printf("Value pointed to by fPtr: %.1f\n", *fPtr);

    // d) Assign the value of the object pointed to by fPtr to variable number2.
    number2 = *fPtr;

    // e) Print the value of number2.
    printf("Value of number2: %.1f\n", number2);

    // f) Print the address of number1. Use the %p conversion specification.
    printf("Address of number1: %p\n", (void*)&number1);

    // g) Print the address stored in fPtr. Use the %p conversion specification.
    printf("Address stored in fPtr: %p\n", (void*)fPtr);

    return 0;
}


