#include<iostream>
using namespace std;
int main()
{
	int n, no=1 , row=1;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
			{
				cout<<no<<"	";
				no=no+1;
				col=col+1;
			}
		cout<<endl;
		row=row+1;
	}
	return 0;
}