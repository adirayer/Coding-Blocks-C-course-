#include<iostream>
using namespace std;

//find last occurance of given key
int lastccurance(int *a,int n,int i,int key)
{
	//base case
	if(i==n)
	{
		return -1;
	}
	//recursive case
	if(a[i]==key)
	{
		int bi=lastccurance(a,n,i+1,key);
		if(bi!=-1)
		{
			return bi;
		}
		else 
		{
			return i;
		}
	}
	int j=lastccurance(a,n,i+1,key);
	return j;
}


int main()
{
	int a[]={1,1,6,3,4,3,3,7};
	int n=sizeof(n)/sizeof(int);

	cout<<lastccurance(a,n,0,3)<<endl;
	return 0;
} 