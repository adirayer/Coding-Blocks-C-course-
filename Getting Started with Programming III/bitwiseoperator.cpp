#include <iostream>
using namespace std;
int main()
{
	int a=7;
	int b=5;

	cout<<(a&b)<<endl;
	cout<<(8&5)<<endl;

	cout<<(a|b)<<endl;
	cout<<(14|2)<<endl;

	cout<<(a^b)<<endl;
	cout<<(14^1)<<endl;

	int x=1;
	cout<<"After leftshift "<<(x<<2)<<endl;

	a=8;
	a=a>>3;
	cout<<"After right shift "<<a<<endl;

	return 0;

}