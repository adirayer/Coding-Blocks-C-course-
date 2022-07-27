#include<iostream>
using namespace std;

int out[100];
int j=0;
void alloccurance(int *a,int n,int i,int key)
{
	if(i==n)
	{
		return;
	}
	if(a[i]==key)
	{
		cout<<i<<" ";
	}
	alloccurance(a,n,i+1,key);
}
int main()
{
	int a[]={1,1,6,3,4,3,3,7};
	int n=sizeof(n)/sizeof(int);

	alloccurance(a,n,0,3); 
	cout<<endl;
	cout<<"Indices are : ";
	for(int i=0;i<j;i++)
	{
		cout<<out[i]<<" ";
	}
	cout<<endl;
	return 0;
} 