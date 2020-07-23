#include<bits/stdc++.h>
using namespace std;

// Values (v)
// Weights (w)
// Number of items (n)
// Knapsack (W)
int knapSack(int itemValue[], int itemWeight[], int n, int bagMaxWeight)
{
	
	if (bagMaxWeight < 0)
		return INT_MIN;

	
	if (n < 0 || bagMaxWeight == 0)
		return 0;


	int include = itemValue[n] + knapSack(itemValue, itemWeight, n - 1, bagMaxWeight - itemWeight[n]);

	
	int exclude = knapSack(itemValue, itemWeight, n - 1, bagMaxWeight);

	
	return max (include, exclude);
}

// 0-1 Knapsack problem
int main()
{
	//set of items each with a weight and a value

	int itemWeight[4] = { 2, 3, 4, 5 };
	int itemValue[4] = { 3, 4, 5, 6 };

	// Knapsack capacity
	int bagMaxWeight = 6;

	// number of items
	int n = sizeof(itemValue) / sizeof(itemValue[0]);

cout << "Knapsack value is " << knapSack(itemValue, itemWeight, n - 1, bagMaxWeight);

	return 0;
}
