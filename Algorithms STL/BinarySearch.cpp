#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[]={5,4,8,9,10};
	int n=sizeof(a)/sizeof(int);

	int key;
	cin>>key;

	bool present = binary_search(a,a+n,key);
	if(present==true)
	{
		cout<<"Key Found "<<endl;
	}
	else
	{
		cout<<"Key NOT FOUND "<<endl;
	}
	return 0;
}