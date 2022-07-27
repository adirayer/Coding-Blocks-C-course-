#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	int N,no;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>no;
		ans=ans^no;
	}
	cout<<"Unique No : "<<ans;
	cout<<endl;
	return 0;
}