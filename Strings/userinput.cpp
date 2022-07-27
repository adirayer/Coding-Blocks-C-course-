#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	//cin>>s;
	//getline(cin,s,'$') //delimiter is  '\n' default

	string s1="world";
	string s2="Hello";

	if (s1<s2)
	{
		cout<<"S1 is smaller than S2"<<endl;
	}
	else
	{
		cout<<"S2 is smaller than s1"<<endl;
	}

	cout<<s1.compare(s2)<<endl
	//cout<<s<<endl;
	return 0;
}