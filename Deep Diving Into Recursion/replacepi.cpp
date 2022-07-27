#include<iostream>
using namespace std;

void replacepi(char* a,int i)
{
	//base case
	if(a[i]=='\0'||a[i+1]=='\0')
	{
		return;
	}
	//recursive case
	if(a[i]=='p' and a[i+1]=='i')
	{
		int j=i+2;
		while(a[j]!='\0')
		{
			j++;
		}
		while(j>=i+2)
		{
			a[j+2]=a[j];
			j--;
		}
		//copy the 3.14
		a[i]='3';
		a[i+1]='.';
		a[i+2]='1';
		a[i+3]='4';

		//then ask the recursion to solve the smaller string
		replacepi(a,i+4);
	}
	else
	{
		//then simply ask recursion to solve the smaller string from i+1
		replacepi(a,i+1);
	}
}

int main()
{
	char a[1000]="axpiersrstspif";
	cout<<"Before replacing pi: "<<a<<endl;
	replacepi(a,0);
	cout<<"After Replacing pi: "<<a<<endl;

	return 0;
}