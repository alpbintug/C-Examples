#include <stdio.h>

int main(){
    int integer;
    float floatValue;
    double doubleValue;
    char character;
    char stringEntery[20];//If you want to use a char * to read a string you have to dynamically allocate it. It takes more effort but it is the right way to do it.

    
    // The '&' symbol points the memory location of that variable and puts the input to the that location, when you type printf("%(variableType)",(variableName)); it goes to that memory location and gets the value out.
    printf("Please enter an integer\n");
    scanf("%d",&integer);
    printf("Please enter a floating point number\n");
    scanf("%f",&floatValue);
    printf("Please enter a double value\n");
    scanf("%lf",&doubleValue);
    printf("Please enter a character\n");
    scanf(" %c",&character);
    //Strings are hold as "Character arrays" in memory, each character has it's own memory location, usually they are continuous.
    //Example: String = "Hello";
    //String[0] = 'H', Location: 1000
    //String[1] = 'e', Location: 1001
    //String[2] = 'l', Location: 1002
    //String[3] = 'l', Location: 1003
    //String[4] = 'o', Location: 1004
    //String[5] = '\0', Location: 1005
    //When we write printf("%s", &String[0]) it starts from location 1000 and reads until it encounters 0 (a.k.a null or '\0')
    printf("Please enter a string\n");
    scanf("%s",&stringEntery[0]);//Equivalent would be scanf("%s",stringEntery); & and [] neutralize each other (check pointers if you don't know what this means)

    printf("Your Inputs:\nInteger: %d\nFloating point: %f\nDouble value: %lf\nCharacter: %c\nString: %s",integer,floatValue,doubleValue,character,stringEntery);



    return 0;
}
