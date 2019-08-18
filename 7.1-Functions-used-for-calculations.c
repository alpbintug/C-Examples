#include <stdio.h>

float square(float value){
    return value*value;
}

float power(float value, float power){
    float returnValue = 1;
    if(power<0){
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

    printf("Calling Square function for value %f: %f\n", 5.234, square(5.234));
    printf("Calling Power function for value %f and power %f: %f\n", 3.14, (float)4, power(3.14,4));

}
