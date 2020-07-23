
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }


int knapSack(int bagMaxWeight, int itemWeight[], int itemValue[], int n)
{


    if (n == 0 || bagMaxWeight == 0)
        return 0;


    if (itemWeight[n - 1] > bagMaxWeight)
        return knapSack(bagMaxWeight, itemWeight, itemValue, n - 1);


    else
        return max(
            itemValue[n - 1] + knapSack(bagMaxWeight - itemWeight[n - 1],
                                   itemWeight, itemValue, n - 1),
            knapSack(bagMaxWeight, itemWeight, itemValue, n - 1));
}

int main()
{
   int itemWeight[4] = {2,3,4,5};
   int itemValue[4] = {3,4,5,6};
   int bagMaxWeight = 6;
    int n = sizeof(itemValue) / sizeof(itemValue[0]);
    cout << knapSack(bagMaxWeight, itemWeight, itemValue, n);
    return 0;
}

