#include<iostream>
using namespace std;

int main()
{
	int a=10;
	float f=10.11;
	char ch='A';
	cout<<&ch<<endl;

	int arr[]={1,2,3,4,5};
	cout<<arr<<endl;

	char ch_arr[10]="HEllo";
	cout<<ch_arr<<endl;

	cout<<a<<endl;
	cout<<&a<<endl;

	cout<<f<<endl;
	cout<<&f<<endl;

	return 0;
}