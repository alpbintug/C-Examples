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
    /*
    Output:

    First char of the string: T
    Second char of the string: h
    Third char of the string: i
    First char of the string: T
    */

    return 0;
}
