#include<iostream>
using  namespace std;

string a[]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};
void integertostring(int n)
{
	//Base case
	if(n==0)
	{
		return;
	}
	//recursive case
	int digit=n%10;
	cout<<a[digit]<<" ";
	integertostring(n/10);
}
int main()
{
	int n=2048;
	integertostring(n);
	cout<<endl;

	return 0;
}