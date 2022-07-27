#include<iostream>
#include<cstring>
using namespace std;

int stringtoint(char* a,int n)
{
	//base case
	if(n==0)
	{
		return 0;
	}
	//recursive
	int digit=a[n-1]-'0';
	//int smallerans=stringtoint(a,n-1);
	//int biggerans=smallerans*10+digit;
	return stringtoint(a,n-1)*10+digit;
}

int main()
{
	char a[]="432914";
	int n=strlen(a);

	int ans=stringtoint(a,n);

	cout<<ans<<endl;
	cout<<ans+1<<endl;

	return 0;
}