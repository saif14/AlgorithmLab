#include <iostream>

using namespace std;

int coins[] = { 1,5,10,25,100 };

//This function finds the maximum number of coin by selecting the best choice at hand
int findMaxCoin(int amount, int size){
    for(int i=0; i<size; i++){
        if(amount < coins[i]) return i-1;
    }
    return -1;
}

//This the greedy approach implementation.
//This finds the selected coins to fulfill an amount
int GreedyApproachCoinChagne(int amount, int change[]){

    int numOfCoins = sizeof(coins)/sizeof(coins[0]);
    int count = 0;
    //191-15-2362
    while(amount){
        int k = findMaxCoin(amount, numOfCoins);
        if(k == -1)
             cout<<"No answer";//implement your code
                //implement what should it print if solution found
        else{
             amount-=coins[k];
         change[++count]=coins[k];
                //Implement your code to minus a coin from the total amount. If total amount is 60 and a coin chosen is 15 then it will be 60-15 = 45
                // Implement your code to save this coin in the array name 'change'
            }
    }
    return count;
}

int main(void) {
    int change[10]; // This needs to be dynamic
    int amount = 34;
    int count = GreedyApproachCoinChagne(amount, change);

    cout<< "\n Number of coins for change of " << amount<< " : " << count;
    cout<< "\n Coins : ";
    for(int i=0; i<count; i++)
    {
        cout<< change[i]<< " ";
    }
}
