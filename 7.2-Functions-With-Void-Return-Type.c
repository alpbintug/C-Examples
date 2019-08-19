#include <stdio.h>
/*Functions are generally used to simplify the code structure and they make the code easier to read.
One of the main goals of the functions is making repeatative code blocks easier to call.*/

//Void return type means, the functions is not returning any data type, so it cannot be assigned unlike pow() function.
//You don't need to assign every function with a return type though. For example, printf returns the number of characters printed in integer format, but most of the time you don't assign printf to any integer.
//Remember! Functions always need to return. Functions are basically "Jump" commands in code flow, you have to "Jump back" to the point you left, to do so, every function, uses "return"
void printOperationResult(float x, float y,  int operationOffset){
    if(operationOffset==0){
        printf("%f",x+y);
    }
    else if(operationOffset==1){
        printf("%f",x-y);
    }
    else if (operationOffset==2){
        printf("%f",x*y);
    }
    else if (operationOffset==3){
        printf("%f",x/y);
    }
    else{
        printf("Illegal operation selection!");
    }
}

int main(){
    float x,y;
    int op;
    printf("Enter your first number\n");
    scanf("%f",&x);
    printf("Enter your second number\n");
    scanf("%f",&y);
    printf("Select your operation: 0- Sum 1-Substract 2-Multiple 3-Division");
    scanf("%d",&op);
    printOperationResult(x,y,op);

}
