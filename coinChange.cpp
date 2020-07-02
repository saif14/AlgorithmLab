#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int coins[] = { 1,5,10,25,100 };
int findMaxCoin(int amount, int size)
{
    for(int i=0; i<size; i++)
    {
        if(amount < coins[i])
            return i-1;
    }
    return -1;
}
int GreedyApproachCoinChagne(int amount, int change[])
{
    int numOfCoins = sizeof(coins)/sizeof(coins[0]);
    int count = 0;
    while(amount )
    {
        int k = findMaxCoin(amount, numOfCoins);
        if(k == -1)
        {
            cout<<"no coinchange";
        }
        else
        {
            amount=amount - coins[k];
            change[count++]=coins[k];
        }
    }
    return count;
}
int main(void)
{
    int change[10];
    int amount = 34;
    int count = GreedyApproachCoinChagne(amount, change);
    cout<< "\n Number of coins for change of " << amount<< " : " << count;
    cout<< "\n Coins : ";
    for(int i=0; i<count; i++)
    {
        cout<< change[i]<< " ";
    }
}
