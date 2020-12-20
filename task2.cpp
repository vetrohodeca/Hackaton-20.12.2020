#include<iostream>
const int SIZE = 7;
using namespace std;
int minCoins(int* arr, int& sum, int counter, int index)
{
	if (sum == 0)
	{
		return counter;
	}
	else
	{
		while (sum >= arr[index])
		{
			counter++;
			sum -= arr[index];
		}
		minCoins(arr, sum, counter, index + 1);
	}
}
int main()
{
	int arr[] = { 100,50,20,10,5,2,1 };
	int sum;
	int counter =0;
	int index=0;
	cin >> sum;
	cout<<minCoins(arr, sum, counter, index);
	return 0;
}
