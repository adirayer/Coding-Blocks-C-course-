#include<iostream>
using namespace std;

int main()
{
	// allocation +dealocation done by compiler
	int b[100];
	//int b[100]={0}; //for zero allocaion

	cout<<sizeof(b)<<endl;
	cout<<b<<endl; //symbol table
	//here b cant be overwritten as b is part of read only memory

	//Dynamic Allocation(in te fly)

	int n;
	cin>>n;
	int *a=new int[n];
	//int *a=new int[n]{0}; //to initialize with allzeros
	cout<<sizeof(a)<<endl;
	cout<<a<<endl;//variable a that is created inside the static memory- can be overwritten


	//nochange
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<a[i]<<" ";
	}

	//freeup space
	delete [] a;

	return 0;



}