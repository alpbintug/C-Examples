/*Not %100 working because I tried writing this in my freshman year and I never tried to fix this code.
I will try to fix the issue in upcoming weeks. 
Basically the issue is; if you Press 'd' for example, the values starting from 0 goes right, but they can't go in the last column if they're not in the n-1th column.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int rraw,rcolumn,a[4][4],rnumber,score;
    char key,dummy;
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            a[i][j]=0;
        }
    }
    srand(time(NULL));
    printf("Have fun!\n");
    score=0;
    while(1){

        rraw=rand()%4;
            rcolumn=rand()%4;
            while(a[rraw][rcolumn]!=0){
                rraw=rand()%4;
                rcolumn=rand()%4;
            }
            rnumber=rand()%100;
            if(rnumber<90){
                a[rraw][rcolumn]=2;
            }
            else{
                a[rraw][rcolumn]=4;
            }
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    printf("| %d ",a[i][j]);
                }
                printf("\n");
            }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                score+=a[i][j];
            }
        }
        printf("Score: %d\n",score);


        scanf(" %c",&key); //ENTER TUSUNUN DA BIR ASCII DEGERI OLDUGU ICIN DUMMY KULLANILIYOR, YOKSA RANDOM SAYI ATAMA 2 KERE CALISIR
        if(key=='w'||key=='W'){
            for(j=0;j<4;j++){
                for(i=0;i<3;i++){
                    if(a[i][j]==0){ //EGER I SATIRI J SUTUNU 0 ISE, O SATIRA KADAR TUM ELEMANLAR 1 SATIR YUKARI OTELENIYOR
                        a[i][j]=a[i+1][j];
                        a[i+1][j]=0;
                    }
                }
                if(a[0][j]==a[1][j]){//EGER IKI BITISIK SATIRIN AYNI SUTUNUNDAKI ELEMANLAR AYNI ISE TOPLANIP BI SATIR YUKARI ITILIYOR
                    a[0][j]+=a[1][j];
                    a[1][j]=a[2][j];
                    a[2][j]=a[3][j];
                    a[3][j]=0;
                }
                if(a[1][j]==a[2][j]){
                    a[1][j]+=a[2][j];
                    a[2][j]=a[3][j];
                    a[3][j]=0;
                }
                if(a[2][j]==a[3][j]){
                    a[2][j]+=a[3][j];
                    a[3][j]=0;
                }
            }
        }
        else if(key=='s'||key=='S'){
            for(j=0;j<4;j++){
                for(i=3;i>0;i--){
                    if(a[i][j]==0){ //EGER I SATIRI J SUTUNU 0 ISE, O SATIRA KADAR TUM ELEMANLAR 1 SATIR YUKARI OTELENIYOR
                        a[i][j]=a[i-1][j];
                        a[i-1][j]=0;
                    }
                }
                if(a[3][j]==a[2][j]){//EGER IKI BITISIK SATIRIN AYNI SUTUNUNDAKI ELEMANLAR AYNI ISE TOPLANIP BI SATIR YUKARI ITILIYOR
                    a[3][j]+=a[2][j];
                    a[2][j]=a[1][j];
                    a[1][j]=a[0][j];
                    a[0][j]=0;
                }
                if(a[2][j]==a[1][j]){
                    a[2][j]+=a[1][j];
                    a[1][j]=a[0][j];
                    a[0][j]=0;
                }
                if(a[1][j]==a[0][j]){
                    a[1][j]+=a[0][j];
                    a[0][j]=0;
                }
            }
        }
        if(key=='a'||key=='A'){
            for(i=0;i<4;i++){
                for(j=0;j<3;j++){
                    if(a[i][j]==0){ //EGER I SATIRI J SUTUNU 0 ISE, O SATIRA KADAR TUM ELEMANLAR 1 SATIR YUKARI OTELENIYOR
                        a[i][j]=a[i][j+1];
                        a[i][j+1]=0;
                    }
                }
                if(a[i][0]==a[i][1]){//EGER IKI BITISIK SATIRIN AYNI SUTUNUNDAKI ELEMANLAR AYNI ISE TOPLANIP BI SATIR YUKARI ITILIYOR
                    a[i][0]+=a[i][1];
                    a[i][1]=a[i][2];
                    a[i][2]=a[i][3];
                    a[i][3]=0;
                }
                if(a[i][1]==a[i][2]){
                    a[i][1]+=a[i][2];
                    a[i][2]=a[i][3];
                    a[i][3]=0;
                }
                if(a[i][2]==a[i][3]){
                    a[i][2]+=a[i][3];
                    a[i][3]=0;
                }
            }
        }
        if(key=='d'||key=='D'){
            for(i=0;i<4;i++){
                for(j=3;j>0;j--){
                    if(a[i][j]==0){ //EGER I SATIRI J SUTUNU 0 ISE, O SATIRA KADAR TUM ELEMANLAR 1 SATIR YUKARI OTELENIYOR
                        a[i][j]=a[i][j-1];
                        a[i][j-1]=0;
                    }
                }
                if(a[i][3]==a[i][2]){//EGER IKI BITISIK SATIRIN AYNI SUTUNUNDAKI ELEMANLAR AYNI ISE TOPLANIP BI SATIR YUKARI ITILIYOR
                    a[i][3]+=a[i][2];
                    a[i][2]=a[i][1];
                    a[i][1]=a[i][0];
                    a[i][0]=0;
                }
                if(a[i][2]==a[i][1]){
                    a[i][2]+=a[i][1];
                    a[i][1]=a[i][0];
                    a[i][0]=0;
                }
                if(a[i][1]==a[i][0]){
                    a[i][1]+=a[i][0];
                    a[i][0]=0;
                }
            }
        }

    }
}
