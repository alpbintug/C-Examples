# include <stdio.h>

int main(){
    int i = 0;
    
    while(i<10){
        i++;
        printf("%d ",i);
    }
    i=0;
    printf("\n");
    //while(1) loop equals while(true) loop in high level languages, which is an infinite loop, be careful while using this.
    while(1){//Unlike in high level languages, C checks conditions with 0 and 1, not true and false (They are the basically same thing, 1 in Logic means true, 0 means false)
        i++;
        if(i>=10)
            break;//I do NOT recommend using "break" command. It uses too high resource for a low level language like C. Make your conditions clearer instead of using "break"
        printf("%d ",i);
    }
    printf("\n");
    i=0;
    do{
        printf("%d ",i);
        i++;
    }while(i<10);
    printf("\n");
    //Difference between do...while loop and while loop is similar with i++ and ++i, i++ uses the i value first, then increases it, ++i increases the i value and uses it later.
    //do...while loop uses the code inside the loop first, then checks for condition, while loop checks for condition first, then uses the code.
    for(i=0;i<10;i++){
        printf("%d ",i);
    }
}
