#include<iostream>
using  namespace std;

int binarysearh(int *a,int s,int e,int key)
{
	//base case
	if(s>e)
	{
		return -1;
	}
	//recursive case
	int m=(s+e)/2;
	if(a[m]==key)
	{
		return m;
	}
	else if(a[m]<key)
	{
		return binarysearh(a,m+1,e,key);
	}
	else
	{
		return binarysearh(a,s,m-1,key);
	}

}
int main()
{
	int a[]={1,4,7,8,10,12};
	int n=sizeof(a)/sizeof(int);
	int key;
	int ans=binarysearh(a,0,n-1,key);
	cout<<ans<<endl;
	cout<<endl;

	return 0;
}