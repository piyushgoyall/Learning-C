#include <stdio.h>

int main()
{
    int *ptr1;
    int **ptr2;
    int x = 10;
    ptr1 = &x;
    printf("X Memory Address: %p\n", &x);             // Use %p to print memory addresses
    printf("ptr1 holding value: %p\n", (void *)ptr1); // Cast to void * for pointer
    printf("ptr1 points to value of x: %d\n", *ptr1);
    ptr2 = &ptr1;
    printf("Access value of x using ptr2: %d\n", **ptr2);
    printf("ptr1 size: %lu bytes\n", sizeof(ptr1));                           // Use %lu for size_t
    printf("ptr1 memory address before increment: %p\n", (void *)&ptr1);      // Cast to void *
    printf("ptr1 holding value before increment: %p\n", (void *)ptr1);        // Cast to void *
    ptr1++;                                                                   // Incrementing a pointer to int
    printf("ptr1 memory address after increment: %p\n", (void *)&ptr1);       // Cast to void *
    printf("ptr1 holding value after increment: %p\n", (void *)ptr1);         // Cast to void *
    printf("ptr1 memory address in Hexadecimal format: %p\n", (void *)&ptr1); // Cast to void *

    int arr[5] = {1, 2, 3, 4, 5};
    printf("1st index element of the array: %d\n", arr[1]); // Added newline and corrected array indexing
    arr[4] = 77;                                            // Corrected index to update the 5th element
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {                                                                   // Changed the loop condition and array size calculation
        printf("Array element at index %d with value %d\n", i, arr[i]); // Added newline
    }

    return 0;
}
