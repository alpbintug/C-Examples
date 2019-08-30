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
    */

    int arrInt[4] = {0xAA,0x01,0x10,0x14};
    int *ptrInt = arrInt;
    printf("First value of array: %x\n",*ptrInt);
    ptrInt++;
    printf("First increment of pointer: %x\n",*ptrInt);
    ptrInt++;
    printf("Second increment of pointer: %x\n",*ptrInt);
    ptrInt++;
    printf("Third increment of pointer: %x\n",*ptrInt);

    /*Output:
    First value of array: aa
    First increment of pointer: 1
    Second increment of pointer: 10
    Third increment of pointer: 14
    */
    int _arrInt[4] = {1,2};
    int *ptr_Int = _arrInt;
    printf("First value of array: %d\n",*ptr_Int);
    ptr_Int++;
    printf("First increment of pointer: %d\n",*ptr_Int);
    /*Output:
    First value of array: 1
    First increment of pointer: 2
    */

    return 0;
}
