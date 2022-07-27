#include <iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter value of n.....";
	cin>>n;
	sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	cout<<"Sum of digits = "<<sum;
	return 0;
}