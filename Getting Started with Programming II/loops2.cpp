#include <iostream>
using namespace std;
int main()
{
	//print all even nos in range [1,n]
	int a;
	int n;
	cout<<"Enter the value of n....";
	cin>>n;
	
	//method 1
	a=2;
	while (a<=n)
	{
		cout<<a<<" ";
		a=a+2;
	}

	cout<<endl;


	//method 2
	a=1;
	while (a<=n)
	{
		if (a%2==0)
		{
			cout<<a<<" ";
		}
		a=a+1;
	}

	return 0;
}