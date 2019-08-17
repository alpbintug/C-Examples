#include <stdio.h>


int main(){
    int i;
    int array1[5];//In C, you have to give an array a size when defining it.
    //If you create an array like this, compiler will allocate 6 slots of memory for this array, first five will be reserved for your data,
    //and the last one will hold the information about end of the array (it is generally null)               
    array1[0]=1;
    array1[1]=2;
    array1[2]=3;
    array1[3]=4;
    array1[4]=5;
    for(i=0;i<5;i++){
        printf("%d ",array1[i]);
    }
    //Output: 1 2 3 4 5
    printf("\n");
    int array2[] = {1,2,3,4,5}; //You can assign values to your array when defining it like this.
    for(i=0;i<5;i++){
        printf("%d ",array2[i]);
    }
    //Output: 1 2 3 4 5
    printf("\n");
    char string1[5];
    string1[0]='H';
    string1[1]='e';
    string1[2]='l';
    string1[3]='l';
    string1[4]='o';
    for(i=0;i<5;i++){
        printf("%c",string1[i]);
    }
    //Output: Hello
    printf("\n");
    char string2[5] = "Hello";
    string2[5]=0;//If you want to write your char array out as a string using %s, you have to set your last char to null, otherwise you will see (with a high chance) meaningless characters.
    printf("%s\n",string2);
    //Output: Hello
    char string3[5] = {'H','e','l','l','o'};//You can define char arrays just like integer arrays
    string3[5]=0;
    printf("%s\n",string3);
    //Output: Hello
    char string4[5] = "Hel";//You dont need to put the entire data when defining the char array.
    string4[3]='l';//You can manipulate your array afterwards.
    string4[4]='o';
    for(i=0;i<5;i++){
        printf("%c",string4);
    }
    //Output: Hello
    string4[5]=0;//Setting the last character to null to print the char array out as string
    printf("\n%s\n",string4);
    //Output: Hello

}
