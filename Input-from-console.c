#include <stdio.h>

int main(){
    int integer;
    float floatValue;
    double doubleValue;
    char character;
    char stringEntery[20];

    printf("Please enter an integer\n");
    scanf("%d",&integer);
    printf("Please enter a floating point number\n");
    scanf("%f",&floatValue);
    printf("Please enter a double value\n");
    scanf("%lf",&doubleValue);
    printf("Please enter a character\n");
    scanf(" %c",&character);
    printf("Please enter a string\n");
    scanf("%s",&stringEntery[0]);//Equivalent would be scanf("%s",stringEntery); & and [] neutralize each other (check pointers if you don't know what this means)

    printf("Your Inputs:\nInteger: %d\nFloating point: %f\nDouble value: %lf\nCharacter: %c\nString: %s",integer,floatValue,doubleValue,character,stringEntery);



    return 0;
}
