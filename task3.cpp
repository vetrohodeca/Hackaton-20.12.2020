#include<iostream>
const int MAXSIZE =128;
using namespace std;

void combinationUtil(int* arr, int n, int k, int index, int* data, int arrIndex) 
{ 
    if (index == k) 
	{ 
        for (int i = 0; i < k; i++) 
            {
            	cout<<data[i];
            }
            if(true)
            {
            	cout<<", ";
			}
        return; 
    } 
    if (arrIndex >= n) 
    {
    	return; 
	}
    data[index] = arr[arrIndex]; 
    combinationUtil(arr, n, k, index + 1, data, arrIndex + 1); 
    combinationUtil(arr, n, k, index, data, arrIndex + 1); 
} 
int main() 
{ 
    int arr[MAXSIZE] ; 
    int k ;
    int n ;
    int data[MAXSIZE];
    cin>>n>>k;
   	for(int i=0;i<n;i++)
   	{
   		cin>>arr[i];
	}
    combinationUtil(arr, n, k, 0, data, 0); 
    cout<<("\b\b  "); //removes last comma
    return 0; 
} 

