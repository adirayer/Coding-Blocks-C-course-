#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={5,4,8,9,10};
	int n=sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int *ans=find(arr,arr+n,key);

	int indx=ans-arr; //subtracting the address gives us the indx pf ans address bucket
	if(indx==n)
	{
		cout<<"Key is NOT Found "<<endl;
	}
	else
	{
		cout<<"Key FOUND at "<<indx<<endl;
	}
	return 0;
}