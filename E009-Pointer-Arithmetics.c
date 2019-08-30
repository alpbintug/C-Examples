#include <stdio.h>

int main(){

    char *_string = "This is my string";
    char *ptr = _string;
    printf("First char of the string: %c\n",*ptr);
    ptr++;
    printf("Second char of the string: %c\n",*ptr);
    ptr++;
    printf("Third char of the string: %c\n",*ptr);
    ptr-=2;
    printf("First char of the string: %c\n",*ptr);
    /*Output:

    First char of the string: T
    Second char of the string: h
    Third char of the string: i
    First char of the string: T
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
    
    return 0;
}
