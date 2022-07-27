#include<iostream>
using namespace std;
void readline(char a[], char delimeter='\n')
{
	int i=0;
	char ch=cin.get();
	while(ch!=delimeter)
	{
		a[i]=ch;
		i++;
		ch=cin.get();
	}
	a[i]='\0';
}

int main()
{
	char a[100];
	//cin ignores whitespaces
	//readline(a,'$');

	cin.getline(a,100, '$'); //helps taking input of a line
	cout<<a<<endl;
	return 0;
}