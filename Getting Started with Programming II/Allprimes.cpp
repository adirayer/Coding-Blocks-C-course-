#include <iostream>
using namespace std;
int main()
{
	int i;
	int n,no;
	cin>>n;
	for(no=2; no<=n ; no=no+1 )
	{
		for(i=2;i<no;i++)
		{
			if(no%2==0)
			{
				break;
			}
		}
		if(i==no)
		{
			cout<<no<<" ";
		}
	}
	cout<<endl;
	return 0;
}