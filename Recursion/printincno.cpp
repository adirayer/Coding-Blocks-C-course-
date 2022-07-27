#include<iostream>
using  namespace std;

void printinc(int i,int n)
{
	//base case
	if(i==n+1)
	{
		return;
	}
	//recursive case
	cout<<i<<" ";
	printinc(i+1,n);
}
int main()
{
	int n;
	cin>>n;
	int i;
	cin>>i;
	printinc(i,n);
	cout<<endl;

	return 0;
}