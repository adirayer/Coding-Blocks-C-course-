#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a, string b)
{
	if (a.length()==b.length())
	{
		return a<b;
	}
	return a.length()>b.length();
	//return a>b;
}

int main()
{
	int n;
	cin>>n;
	string s[100];
	cin.get(); //cin.ignore()

	for (int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	//Sort
	sort(s,s+n,compare);
	cout<<"After Sorting : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}

	cout<<endl;
	return 0;
}