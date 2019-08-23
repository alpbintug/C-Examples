#include <stdio.h>

float square(float value){
    return value*value;
}

float power(float value, float power){
    float returnValue = 1;
    if(power<0){//Finding a negative power of a value is more advanced, will add that in upcoming weeks. 
        printf("Roots are not supported in this function\n");
        return 0;
    }
    while(power>0){
        returnValue*=value;
        power--;
    }
    return returnValue;
}

int main(){

    printf("Calling Square function for value %f: %f\n", 5.234, square(5.234));//Output: Calling Square function for value 5.234000: 27.394758
    printf("Calling Power function for value %f and power %f: %f\n", 3.14, (float)4, power(3.14,4));//Output: Calling Power function for value 3.140000 and power 4.000000: 97.211731
    //If you want to print a value with a different cast -for example I printed integer 4 out as a float using %f- you have to put the casting term before the value.

}
