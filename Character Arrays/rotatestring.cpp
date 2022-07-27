#include<iostream>
#include<cstring>
using namespace std;

void RotateString(char a[],int n)
{
	//move every chararacter n postions ahead
	int len=strlen(a);
	int i=len-1;
	//cout<<a<<endl;
	while(i>=0)
	{
		a[i+n]=a[i];
		i--;
	}
	//cout<<a<<endl;

	i=0;
	int j=len;
	while(i<n)
	{
		a[i]=a[j];
		i++;
		j++;
	}
	//cout<<a<<endl;
	a[len]='\0';
	//cout<<a<<endl;
}

int main()
{
	char a[100]="Hello";
	int n=3;
	//cin>>n;
	cout<<"Before Rotation "<<a<<endl;
	RotateString(a,n);
	cout<<"After Rotation "<<a<<endl;
	
	return 0;
}