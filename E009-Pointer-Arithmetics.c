#include <stdio.h>

int main(){

    char *_string = "This is my string";
    char *ptr = _string;
    printf("First char of the string: %c, address of first char: %x\n",*ptr,ptr);
    ptr++;
    printf("Second char of the string: %c, address of second char: %x\n",*ptr,ptr);
    ptr++;
    printf("Third char of the string: %c, address of third char: %x\n",*ptr,ptr);
    ptr-=2;
    printf("First char of the string: %c, address of first char: %x\n",*ptr,ptr);
    /*Output:
    First char of the string: T, address of first char: 405044
    Second char of the string: h, address of second char: 405045
    Third char of the string: i, address of third char: 405046
    First char of the string: T, address of first char: 405044
    
    As you can see here, "++" operation on char pointers increment the pointer value by one byte, which is the size of a char. Theoretically you can see the whole memory using pointer arithmetics.
    */
    int arrInt[4] = {0xAA,0x01,0x10,0x14};
    int *ptrInt = arrInt;
    printf("\nFirst value of array: %x, address of array[0]: %x\n",*ptrInt,ptrInt);
    ptrInt++;
    printf("First increment of pointer: %x, address of array[1]: %x\n",*ptrInt,ptrInt);
    ptrInt++;
    printf("Second increment of pointer: %x, address of array[2]: %x\n",*ptrInt,ptrInt);
    ptrInt++;
    printf("Third increment of pointer: %x, address of array[3]: %x\n",*ptrInt,ptrInt);

    /*Output:
    First value of array: aa, address of array[0]: 61ff00
    First increment of pointer: 1, address of array[1]: 61ff04
    Second increment of pointer: 10, address of array[2]: 61ff08
    Third increment of pointer: 14, address of array[3]: 61ff0c
    "++" operation on integer pointers increment the pointer value by four bytes, which is the size of a integer. 
    */
    int _arrInt[4] = {1,2};
    int *ptr_Int = _arrInt;
    printf("\nFirst value of array: %d, address of array[0]: %x\n",*ptr_Int,ptr_Int);
    ptr_Int++;
    printf("First increment of pointer: %d, address of array[1]: %x\n",*ptr_Int,ptr_Int);
    /*Output:
    First value of array: 1, address of array[0]: 61fef0
    First increment of pointer: 2, address of array[1]: 61fef4
    */

    return 0;
}
