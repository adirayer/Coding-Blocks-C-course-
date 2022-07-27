#include<iostream>
using namespace std;
int main()
{
	int n , row;
	cin>>n;
	for(row=1; row<=n; row=row+1)
	{
		for(int col=1;col<=row;col=col+1)
			{	
				if (col==1 || col==row)
				{
					cout<<row<<"	";
				}
				else
				{
					cout<<"0"<<"	";
				}
			}
		cout<<endl;
	}
	return 0;
}