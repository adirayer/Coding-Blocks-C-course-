#include<iostream>
using namespace std;

void clearbits(int &n,int i)
{
	int mask=(~0);
	mask=mask<<i;
	n=n & mask;
}

void clearrange(int &n,int j, int i)
{
	int ma=(~0);
	ma=ma<<j;
	//int mb=2^i-1;
	int mb=(1<<i)-1;
	int mask=ma|mb;
	n=n & mask;
}

int main()
{
	int n=15;
	int i=3;
	//cout<<(~0)<<endl;
	//clearbits(n,i);
	clearrange(n,4,2);
	cout<<n<<endl;//8

	return 0;
}