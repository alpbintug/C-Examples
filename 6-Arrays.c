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

}
