#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number";
	cin>>a;
	if(a>=0 && a<=10)
	{
		cout<<"Hello"<<endl;	//endl="\n"
	}
	else if(a>10 && a<=20)
	{
		cout<<"World";
		cout<<"\n";
	}
	else
	{
		cout<<"Welcome";
		cout<<"\n";
	}
	return 0;

}