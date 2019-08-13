#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/*This experiment tries to find your win chance in a gambling scenerio such as;
You have X amount of money and you want to reach X+Y amount of money. You win or loose one unit of money each time you play with a Z percent of chance.
You either lose all of your money or you win extra Y amount of money. What is your chance to win the Y amount of money*/


main(){
    int i,j,money,moneyNeededToWin,win,startingMoney,sampleSpaceSize,winCondition;
    srand(time(NULL));
    win=0;
    moneyNeededToWin=10;//If you Increase this, your win chance will drop
    sampleSpaceSize=1000;//Increase this in order to have more realistic results.
    winCondition=4900;//Lower this is, greater chance you have to win, currently %51 win chance

    for(i=0;i<sampleSpaceSize;i++){
        money=100;
        startingMoney=money;
    while((money>0)&(money<startingMoney+moneyNeededToWin)){//There are 2 conditions, you either win the money you aimed for or you lose all of your money.
    j=rand()%10000;
    if(j<winCondition) //If you get the odds lover than you have to, you lose one unit of money.
    money--;
    else //Else you win one unit of money
    money++;

}
    if(money==startingMoney+moneyNeededToWin) //If you reach your target, you win. This loops sampleSpaceSize times to see your winrate.
    win++;
}
    //With %51 win chance each round, you are expected to win %23 to %28 of your games.
    //If we lower your win chance to %44.5 -Which is standart for such a gambling game- your win chance will drop to %2-%1
    printf("If you have %d money, and you have to win %d more money \nby playing a game where win one unit or lose unit each time you play \nwith a %d percent win chance each time you play, \nyour chance of winning will be: %f",startingMoney,moneyNeededToWin,
           100-winCondition/100,(float)win/sampleSpaceSize);
}
