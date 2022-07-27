#include<iostream>
using namespace std;

void BubbleSort(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				swap(*(a+j),*(a+j+1));
			}
		}
	}
}

void bubblesortrec(int *a,int n,int i)
{
	//base case
	if(i==n-1)
	{
		return;
	}
	//recursive case
	for(int j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}
	bubblesortrec(a,n,i+1);
}

void PrintArray(int *a,int n)
{

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	
}
int main()
{
	int a[]={6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);
	cout<<"Before Sorting : ";
	PrintArray(a,n);
	cout<<"After Sorting : ";
	bubblesortrec(a,n,0);
	PrintArray(a,n);
	return 0;
}