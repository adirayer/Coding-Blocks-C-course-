#include<iostream>
#include<algorithm>
using namespace std;

bool check(int z,int n, int m, int x,int y)
{
	return z*x<=m+(n-z)*y;
}

int main()
{
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int si=0;
	int li=n;
	int ans=0;
	while(si<=li)
	{
		int mid=(li+si)/2;
		if(check(mid,n,m,x,y))
		{
			si=mid+1;
			ans=mid;
		}
		else
		{
			li=mid-1;
		}
	}
	return 0;
}