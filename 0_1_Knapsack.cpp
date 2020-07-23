#include<bits/stdc++.h>
using namespace std;
int knapSack(int v[], int w[], int n, int W);
int main()
{
    int itemWeight[4] = {2,3,4,5};
    int itemValue[4] = {3,4,5,6};
    int bagMaxWeight = 6;
    int n = sizeof(itemWeight) / sizeof(itemWeight[0]);
    cout << "Knapsack value is " << knapSack(itemWeight, itemValue, n - 1, bagMaxWeight);
    return 0;
}

int knapSack(int v[], int w[], int n, int W)
{
    if (W < 0)
        return INT_MIN;
    if (n < 0 || W == 0)
        return 0;
    int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
    int ex = knapSack(v, w, n - 1, W);
    return max (in, ex);
}
