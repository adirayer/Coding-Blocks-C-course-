#include<iostream>
using namespace std;

int fibo(int n)
{
	//base casses( n=0 , n=1)
	if(n==0||n==1)
	{
		return n;
	}
	// recurrance relation= f(n)=fibo(n-1)+fibo(n-2)
	int smallerans1=fibo(n-1);
	int smallerans2=fibo(n-2);

	//find the solution 
	int biggerans=smallerans1+smallerans2;

	return biggerans;
}
int main()
{
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;

	return 0;
}