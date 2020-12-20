#include<iostream>
#define MAXSIZE 20
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int matrix[MAXSIZE][MAXSIZE];
	int min[MAXSIZE];
	int max[MAXSIZE];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		min[i]=matrix[i][0];// by default first element is the smallest
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]<min[i])
			{
				min[i]=matrix[i][j];
			}
		}
	}
	for(int j=0;j<m;j++)
	{
		max[j]=matrix[0][j];// by default first element is the biggest
		for(int i=0;i<n;i++)
		{
			if(matrix[i][j]>max[j])
			{
				max[j]=matrix[i][j];
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==min[i]&&matrix[i][j]==max[j])
			{
				cout<< matrix [i][j]<<endl;
			}
		}
	}
	return 0;
}
