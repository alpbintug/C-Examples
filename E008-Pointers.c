#include <stdio.h>


int main(){
    int *intP;
    char *charP1;
    char *charP2 = "This is how you declare a string";//If you want to create a string using this method, you have to assign the string while defining the char*
    double *doubleP;
    float *floatP;

    int varInt = 1;
    char varChar = 'a';
    double varDouble = 1.2353754584693452;
    float varFloat = 567.23463;

    intP = &varInt;
    //We assign the adress of given value to the given pointer, remember '&' symbol is also used in scanf and it helps you to read the value to the address of given variable
    printf("Value of integer is: %d\nAddress of integer: %x\nValue held by intPointer is: %d\nAddress held by intPointer is: %x\n",varInt,&varInt,*intP,intP);
    charP1 = &varChar;
    //All of the addresses is hold in integer values, so you will assign an integer value to a char pointer, this could sound weird, but main job of pointers is to hold the location of the given variable.
    printf("\nValue of character is: %c\nAddress of character:  %x\nValue held by charPointer is: %c\nAddress held by charPointer is: %x\n",varChar,&varChar,*charP1,charP1);
    printf("\nString held by charPointer2:%s\nAddress held in charPointer2: %x\n",charP2,charP2);
    //As we saw in previous examples, %s command reads chars until it sees a null character. Remember; char pointer hold the starting address of the given string, so you won't need use '*' symbol to print out the string.
    doubleP = &varDouble;
    printf("\nValue of double is: %lf\nAddress of double: %x\nValue held by doublePointer is: %lf\nAddress held by doublePointer is: %x\n",varDouble,&varDouble,*doubleP,doubleP);
    floatP = &varFloat;
    printf("\nValue of float is: %f\nAddress of float: %x\nValue held by doublePointer is: %f\nAddress held by doublePointer is: %x\n",varFloat,&varFloat,*floatP,floatP);

        
    /*
    (ADDRESS VALUES WILL BE DIFFERENT EVEN IF YOU COPY & PASTE THIS CODE, NOTHING IS WRONG, YOUR COMPILER JUST GAVE THOSE VARIABLES DIFFERENT ADDRESSES)

    Output:
        
    Value of integer is: 1
    Address of integer: 61ff08
    Value held by intPointer is: 1  
    Address held by intPointer is: 61ff08

    Value of character is: a
    Address of character:  61ff07
    Value held by charPointer is: a
    Address held by charPointer is: 61ff07

    String held by charPointer2:This is how you declare a string
    Address held in charPointer2: 405048

    Value of double is: 1.235375
    Address of double: 61fef8
    Value held by doublePointer is: 1.235375
    Address held by doublePointer is: 61fef8

    Value of float is: 567.234619
    Address of float: 61fef4
    Value held by doublePointer is: 567.234619
    Address held by doublePointer is: 61fef4
    */
}
