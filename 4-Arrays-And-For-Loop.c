#include <stdio.h>

int main(){
 int a[10];
 char b[10];
 char c[10];

 int i;

 for(i=0;i<10;i++){
    a[i] = i*i+i;
    b[i] = 'A'+i;
    c[i] = 'a'+i;
 }

 for(i=0;i<10;i++){
    printf("%d  %c  %d  %c\n",a[i],b[i],b[i],c[i]);
 }

}
