#include <stdio.h>


int main(){
    int i;
    int array1[5];
    array1[0]=1;
    array1[1]=2;
    array1[2]=3;
    array1[3]=4;
    array1[4]=5;
    for(i=0;i<5;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    int array2[] = {1,2,3,4,5};
    for(i=0;i<5;i++){
        printf("%d ",array2[i]);
    }

}
