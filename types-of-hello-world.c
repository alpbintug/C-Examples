#include <stdio.h>
#include <unistd.h>

int main(){
    //Printing "Hello world with different methods

    printf("Hello World 1\n");
    puts("Hello World 2\n");//Puts the string "Hello World 2" to the console

    //Using char* to print hello world;
    char *helloWorld="Hello World 3\n";
    //Putting each character until string ends
    while(putchar(*helloWorld++));//putchar function returns a integer value, if it returns a 0, that means the next char is \0
    helloWorld = "Hello World 4\n";
    //First value 1 means writing mode, middle valua is the string we want to write, last value is the lenght
    write(1,helloWorld,14);
    helloWorld = "Hello World 5\n";
    printf("%s",helloWorld);
    helloWorld = "Hello World 6\n";
    puts(helloWorld);

    return 0;
}
