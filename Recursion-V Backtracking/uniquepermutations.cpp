#include<iostream>
#include<set>
#include<string>
using namespace std;

void permute(char a[],int i,set<string>&s)
{
	//base case
	if(a[i]=='\0')
	{
		//cout<<a<<endl;
		string t(a);
		s.insert(t);
		return;
	}
	//recursive case
	for(int j=i;a[j]!='\0';j++)
	{
		swap(a[i], a[j]);
		permute(a,i+1,s);

		//backtracking-to restore the original array
		swap(a[i], a[j]);
	}
}

int main()
{
	char a[100];
	cin>>a;
	set<string> s;
	permute(a,0,s);

	//loop over s
	for(auto str:s)
	{
		cout<<str<<",";
	}
	return 0;
}
