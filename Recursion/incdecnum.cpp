#include<iostream>
using  namespace std;

void printdec(int n)
{
	//base case
	if (n==0)
	{
		return;
	}
	//recursive case
	cout<<n<<" "<<endl;
	printdec(n-1);
}

void printinc(int n)
{
	//base case
	if (n==0)
	{
		return;
	}
	//recursive case
	printinc(n-1);
	cout<<n<<" ";

}

int main()
{
	int n;
	cin>>n;
	printdec(n);
	printinc(n);
	cout<<endl;

	return 0;
}