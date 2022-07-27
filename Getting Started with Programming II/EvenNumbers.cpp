#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;

	for (i=1;i<=n;i=i+1)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}