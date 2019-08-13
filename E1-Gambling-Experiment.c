#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


main(){
    int i,j,money,moneyNeededToWin,win,startingMoney,sampleSpaceSize,winCondition;
    srand(time(NULL));
    win=0;
    moneyNeededToWin=10;
    sampleSpaceSize=1000;
    winCondition=4900;

    for(i=0;i<sampleSpaceSize;i++){
        money=100;
        startingMoney=100;
    while((money>0)&(money<startingMoney+moneyNeededToWin)){
    j=rand()%10000;
    if(j<winCondition)
    money--;
    else
    money++;

}
    if(money==startingMoney+moneyNeededToWin)
    win++;
}
    printf("If you have %d money, and you have to win %d more money \nby playing a game where win one unit or lose unit each time you play \nwith a %d percent win chance each time you play, \nyour chance of winning will be: %f",startingMoney,moneyNeededToWin,
           100-winCondition/100,(float)win/sampleSpaceSize);
}
