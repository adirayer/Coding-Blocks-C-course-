#include<iostream>
using namespace std;

bool sortedar(int *a,int n)
{
	//base case
	if(n==0||n==1)
	{
		return true;
	}
	//recursive case
	bool issmallersorted=sortedar(a+1,n-1);
	if(issmallersorted && a[0]<a[1])
	{
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int a[]={1,4,6,8,9,10};
	int n=sizeof(a)/sizeof(int);
	bool ans= sortedar(a,n);

	if(ans==true)
	{
		cout<<"Sorted"<<endl;
	}
	else
	{
		cout<<"unsorted"<<endl;
	}

	return 0;
}