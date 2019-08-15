#include <stdio.h>

int main(){
 int a[10]; //Creating an integer array
 char b[10]; //Creating two char arrays
 char c[10]; 
 
 /* 
 Illegal array creation:
 int x=10;
 int a[x];
 You can't do this because when compiler starts, It reserves a spot in memory for variables in the code.
 Trying to create a[x] is illegal because you have to reserve a spot in memory for arrays too. 
 To do so, you have to make their size constants, not variables. Because in C variables have no value in the time of reserving spot for them.
 So when compiler sees a[x] it can't reserve a spot for it and you will encounter an error.
 */

 int i; //Loop variable

 for(i=0;i<10;i++){
    a[i] = i*i+i; //Assigning values
    b[i] = 'A'+i; //Yes you can assign integer value to a char, but it's limited by one byte.
    c[i] = 'a'+i;
 }

 for(i=0;i<10;i++){
    printf("%d  %c  %d  %c\n",a[i],b[i],b[i],c[i]);
 }

}
