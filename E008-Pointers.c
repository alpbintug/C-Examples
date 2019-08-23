#include <stdio.h>


int main(){
    int *intP;
    char *charP1;
    char *charP2 = "This is how you declare a string";
    double *doubleP;
    float *floatP;

    int varInt = 1;
    char varChar = 'a';
    double varDouble = 1.2353754584693452;
    float varFloat = 567.23463;

    intP = &varInt;
    printf("Value of integer is: %d\nAddress of integer: %x\nValue held by intPointer is: %d\nAddress held by intPointer is: %x\n",varInt,&varInt,*intP,intP);
    charP1 = &varChar;
    printf("\nValue of character is: %c\nAddress of character:  %x\nValue held by charPointer is: %c\nAddress held by charPointer is: %x\n",varChar,&varChar,*charP1,charP1);
    printf("\nString held by charPointer2:%s\nAddress held in charPointer2: %x\n",charP2,charP2);
    doubleP = &varDouble;
    printf("\nValue of double is: %lf\nAddress of double: %x\nValue held by doublePointer is: %lf\nAddress held by doublePointer is: %x\n",varDouble,&varDouble,*doubleP,doubleP);
    floatP = &varFloat;
    printf("\nValue of float is: %f\nAddress of float: %x\nValue held by doublePointer is: %f\nAddress held by doublePointer is: %x\n",varFloat,&varFloat,*floatP,floatP);


}
