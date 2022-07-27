#include<iostream>
using namespace std;
int main()
{
	//Initialization
	int a[100][100];
	int r,c;
	cout<<"Enter number of rows and cols";
	cin>>r>>c;

	//cout<<"Enter the values";
	int val=1;
	for (int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			//cin>>a[row][col];
			a[row][col]=val;
			val++;
		}
	}

	for (int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	return 0;
}