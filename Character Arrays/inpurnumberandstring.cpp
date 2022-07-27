#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char a[100];
	//cin.ignore()
	cin.get(); //ignores the '\n'after taking the input of the number n
	//we read the ip pointer value but not store it elsewhere thus ignored


	for(int i=0;i<n;i++)
	{
		cin.getline(a,100);
		cout<<a<<endl;
	}
	
	return 0;
}