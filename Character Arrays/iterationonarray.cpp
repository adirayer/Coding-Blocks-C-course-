//iterationonarray
#include<iostream>
using namespace std;

int main()
{

	char c[]= "Hello Aditya"; //when using " " no need to mention space for array
	cout<<c<<endl;

	for(int i=0;c[i]!='\0';i++)
	{
		cout<<c[i]<<" ";
	}

	return 0;
}