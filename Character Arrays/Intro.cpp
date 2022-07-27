//Intro
#include<iostream>
using namespace std;

int main()
{
	//char a[]={'A','D','I','T','Y','A'};
	char a[7]= {'A','D','I','T','Y','A','\0'}; // '\0' must be added at end to avoid garbage values
	cout<<a<<endl;

	char b[10];
	b[0]='A';
	b[1]='B';
	b[2]='\0';
	cout<<b<<endl;

	char c[]= "Hello Aditya"; //when using " " no need to mention space for array
	cout<<c<<endl;

	return 0;
}