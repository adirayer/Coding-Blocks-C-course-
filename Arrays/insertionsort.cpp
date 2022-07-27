#include<iostream>
using namespace std;
int main()
{
	int a[]={5,3,1,2,4};
	//int n=sizeof(a)/sizeof(int);
	int n=5,i,j;

	cout<<"before sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

//insertion sort
	for(i=1;i<n;i++)
	{
		int pickedupcard=a[i];
		for(j=i-1;j>=0 and a[j]>pickedupcard;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=pickedupcard;
	}
	
	cout<<"after sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	
	return 0;
}